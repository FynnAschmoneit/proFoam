scalar i = 0;
while(i<2){
    fvScalarMatrix sEqn
    (
	fvm::ddt(s)
	+fvm::div(phi,s)
	-fvm::laplacian(D,s)
    );
    sEqn.solve();
    i++;
}
