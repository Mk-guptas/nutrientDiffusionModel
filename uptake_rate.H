forAll(mesh.C(), cell_i){
    dimensionedScalar cur_h ("cur_h", dimLength, h[cell_i]);
	dimensionedScalar cur_c ("cur_c", dimensionSet(0, 0, 0, 0, 0, 0 ,0), c[cell_i]);
    uptake_rate[cell_i] = (n*cur_h/(k+cur_c)).value();
    
};
