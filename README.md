# proFoam
An OpenFOAM implementation for solving pressure retarded osmosis (PRO) membrane processes. 


This implementation solves simple PRO processes. It is based on a range of assumptions/simplifications, which validity need to be assessed for a given application:
- The hydrodynamics in the feed channel are known and insignificant in comparison to the draw channel. Only the draw channel is resolved in the simulations.
- Variations in the dynamic pressure in the draw channel are insignificant in comparison to the hydraulic pressure on the draw side. The hydraulic pressure is therefore taken as a constant parameter in the boundary conditions.
- The water density is not affected by the solute concentration.

Please cite this article when using proFoam: 
Aschmoneit, F., Hélix-Nielsen, C. Submerged-Helical Module Design for Pressure Retarded Osmosis
