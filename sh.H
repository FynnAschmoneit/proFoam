Info << "writing sh_ field" << endl;

surfaceScalarField snGrads = fvc::snGrad(s);
surfaceScalarField s_srf("s_srf", fvc::interpolate(s));
sh = cmptDivide(snGrads,max(1e-10,1.0-s_srf));

if(runTime.outputTime())
{
    sh.write();
}


