using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Phase02 : MonoBehaviour {

	public GameObject C;
	public GameObject I;

	private int Cont;
	private bool ValR1;
	private bool ValR2;
	private bool ValR3;
	private bool ValR4;
	private bool ValR5;
	private bool ValR6;
	private bool ValR7;

	void Start () {
		Cont = 0;
		ValR1 = true;
		ValR2 = true;
		ValR3 = true;
		ValR4 = true;
		ValR5 = true;
		ValR6 = true;
		ValR7 = true;
	}

	void Update () {
		if (Ctrl.CtrlMain.R1 == "R1a" && Ctrl.CtrlMain.RF == "RFa" && ValR1) {
			ValR1 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R2 == "R2a" && Ctrl.CtrlMain.RF == "RFa" && ValR2) {
			ValR2 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R3 == "R3a" && Ctrl.CtrlMain.RNF == "RNFa" && ValR3) {
			ValR3 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R4 == "R4a" && Ctrl.CtrlMain.RF == "RFa" && ValR4) {
			ValR4 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R5 == "R5a" && Ctrl.CtrlMain.RNF == "RNFa" && ValR5) {
			ValR5 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R6 == "R6a" && Ctrl.CtrlMain.RNF == "RNFa" && ValR6) {
			ValR6 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R7 == "R7a" && Ctrl.CtrlMain.RF == "RFa" && ValR7) {
			ValR7 = false;
			StartCoroutine (Correct ());
		}
		if (Ctrl.CtrlMain.R1 == "R1a" && Ctrl.CtrlMain.RNF == "RNFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R2 == "R2a" && Ctrl.CtrlMain.RNF == "RNFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R3 == "R3a" && Ctrl.CtrlMain.RF == "RFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R4 == "R4a" && Ctrl.CtrlMain.RNF == "RNFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R5 == "R5a" && Ctrl.CtrlMain.RF == "RFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R6 == "R6a" && Ctrl.CtrlMain.RF == "RFa")
			StartCoroutine(Incorrect());
		if (Ctrl.CtrlMain.R7 == "R7a" && Ctrl.CtrlMain.RNF == "RNFa")
			StartCoroutine(Incorrect());

		if (Cont == 2) {
			SceneManager.LoadScene(2);
		}
	}

	IEnumerator Correct () {
		Cont += 1;
		C.SetActive (true);
		yield return new WaitForSeconds(3f);
		C.SetActive (false);
	}
	IEnumerator Incorrect () {
		I.SetActive (true);
		yield return new WaitForSeconds(3f);
		I.SetActive (false);
	}
}
