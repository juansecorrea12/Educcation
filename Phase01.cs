using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Phase01 : MonoBehaviour {

	public GameObject C;
	public GameObject I;
	public GameObject Info;

	private bool ValR1;
	private bool ValR2;

	public Text R;
	private int Cont;

	void Start () {
		StartCoroutine (InfoStart ());
		ValR1 = true;
		ValR2 = true;
		Cont = 0;
	}

	void Update () {
		R.text = Ctrl.CtrlMain.RFID;
		if (Ctrl.CtrlMain.Verification == 1) {
			if (Ctrl.CtrlMain.RFID == "abc" && ValR1) {
				Cont += 1;
				ValR1 = false;
				Ctrl.CtrlMain.RFID = "";
				StartCoroutine (Correct ());			
			} else if (Ctrl.CtrlMain.RFID == "abd" && ValR2) {
				Cont += 1;
				ValR2 = false;
				Ctrl.CtrlMain.RFID = "";
				StartCoroutine (Correct ());
			} else {
				Ctrl.CtrlMain.RFID = "";
				StartCoroutine(Incorrect());
			}
		}
	}

	IEnumerator Correct () {
		C.SetActive (true);
		yield return new WaitForSeconds(3f);
		C.SetActive (false);
		if (Cont == 2) {
			SceneManager.LoadScene(1);
		}
	}
	IEnumerator Incorrect () {
		I.SetActive (true);
		yield return new WaitForSeconds(3f);
		I.SetActive (false);
	}
	IEnumerator InfoStart () {
		yield return new WaitForSeconds(10f);
		Info.SetActive (false);
	}
}