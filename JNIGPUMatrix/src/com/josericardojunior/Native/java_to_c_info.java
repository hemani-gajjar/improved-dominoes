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

	void computeZScore(
        DescriptiveStatistics ds, 
        RealDistribution dist, 
        BiConsumer<Double, Double> cons
    ) {
        double variance = ds.getPopulationVariance();
        double sd = Math.sqrt(variance);
        double mean = ds.getMean();
        for ( int index = 0; index < ds.getN(); ++index) {
            double zscore = (ds.getElement(index)-mean)/sd;
            double sf = 1.0 - dist.cumulativeProbability(Math.abs(zscore));
            cons.accept(zscore, sf);
        }
    }

}
