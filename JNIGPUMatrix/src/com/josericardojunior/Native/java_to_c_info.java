package com.josericardojunior.Native;

public class java_to_c_info {
	public int row;
	public int col;
	public float value;
	
	public java_to_c_info(){
		
	}

	double pToZ(double p) {
		double z = Math.sqrt(2) * Erf.erfcInv(2*p);
		return(z);
	}
}
