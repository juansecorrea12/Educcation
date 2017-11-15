using UnityEngine;
using System.IO.Ports;

public class Ctrl : MonoBehaviour {

	SerialPort stream = new SerialPort ("COM2", 9600);
	private string value;
	
	public static Ctrl CtrlMain;

	public string RFID;
	public int Verification;
	public string Result;

	public string R1;
	public string R2;
	public string R3;
	public string R4;
	public string R5;
	public string R6;
	public string R7;
	public string RF;
	public string RNF;

	public string RGB;
	
	void Awake () {
		if (CtrlMain == null) {
			DontDestroyOnLoad (gameObject);
			CtrlMain = this;
		} else if (CtrlMain != null)
			Destroy (gameObject);
	}

	void Update () {
		if (!stream.IsOpen)
			stream.Open();

		value = stream.ReadLine ();

		if (value == "a" || value == "b" || value == "c" || value == "d")
			RFID += value;
			
		if (value == "1" || value == "0")
			Verification = int.Parse (value);
		
		if (value == "R1a" || value == "R1b")
			R1 = value;
		if (value == "R2a" || value == "R2b")
			R2 = value;
		if (value == "R3a" || value == "R3b")
			R3 = value;
		if (value == "R4a" || value == "R4b")
			R4 = value;
		if (value == "R5a" || value == "R5b")
			R5 = value;
		if (value == "R6a" || value == "R6b")
			R6 = value;
		if (value == "R7a" || value == "R7b")
			R7 = value;
		if (value == "RFa" || value == "RFb")
			RF = value;
		if (value == "RNFa" || value == "RNFb")
			RNF = value;
		
		if (value == "R" || value == "G" || value == "B")
			RGB = value;
	}
}