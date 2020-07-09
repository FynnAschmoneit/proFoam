Info << "writing sGrad field" << endl;
sGrad = fvc::grad(s);

if(runTime.outputTime())
{
    sGrad.write();
}
