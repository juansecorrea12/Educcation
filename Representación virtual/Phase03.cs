using System.Collections;
using UnityEngine;

public class Phase03 : MonoBehaviour {

	public GameObject C;
	public GameObject I;
	public GameObject E;
	private bool Val1 = true;
	private bool Val2 = true;
	private bool Val3 = true;
	
	void Update () {
		if (Ctrl.CtrlMain.RGB == "R" && Val1) {
			Val1 = false;
			StartCoroutine (Incorrect ());
		}
		if (Ctrl.CtrlMain.RGB == "V" && Val2) {
			Val2 = false;
			StartCoroutine (Incorrect ());
		}
		if (Ctrl.CtrlMain.RGB == "G" && Val3) {
			Val3 = false;
			StartCoroutine (Correct ());
		}
	}

	IEnumerator Correct () {
		C.SetActive (true);
		yield return new WaitForSeconds(3f);
		C.SetActive (false);
		E.SetActive (true);
		yield return new WaitForSeconds(2f);
		Application.Quit ();
	}
	IEnumerator Incorrect () {
		I.SetActive (true);
		yield return new WaitForSeconds(3f);
		I.SetActive (false);
	}
}
