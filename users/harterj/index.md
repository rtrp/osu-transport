---
title: Jackson-personal
layout: default
author: Jackson Harter
---
Jackson R. Harter
================================

<img src="{{ site.url }}users/harterj/images/jrhIdaho.jpg" height="300" width="300">

I am in my fourth year as a PhD student at Oregon State University. My advisors are Todd Palmer and Alex Greaney[^1]; I am also a member of the <a href="http://alexgreaney.com/" target ="blank">Computational Materials Group</a> at UC Riverside. I am currently installed at Idaho National Laboratory as an intern in the Reactor Physics and Analysis group.

Email: <a href="mailto:harterj@oregonstate.edu" target="top"> harterj@oregonstate.edu </a>  
You can find my resume [here](./files/jacksonResumePublic.pdf).

***

## Research areas
We are interested in simulating deterministic phonon transport by further developing the code Rattlesnake (written in the <a href="http://mooseframework.org/" target="blank">MOOSE</a> framework) to predict thermal conductivity in nuclear fuels operating at high temperatures with isotopic defects and evolving microstructures. We are developing a framework to bridge the gap between the atomistic and engineering scale, and collaborate with <a href="http://www.engr.ucr.edu/faculty/me/AlexanderGreaney.html" target="blank">Dr. Alex Greaney</a> and his research group at UC Riverside. We have shown Rattlesnake to be an effective and efficient engine for simulating heterogeneous and homogeneous phonon transport; it solves the frequency independent equation of phonon radiative transfer in the self-adjoint angular flux formulation (SAAF) using the single mode relaxation time approximation. We are interested in phonon transport at high temperatures and therefore must implement multifrequency transport to model these physics effectively, in addition to considering contributions from anharmonic three- and four-phonon processes.


#### Thermal boundary resistance
Phonons crossing a material interface experience a phenomenon known as *thermal boundary resistance* (TBR), unlike neutrons which rely on a cross section of interaction to dictate their scattering behavior in materials. TBR occurs when phonons cross an interface; phonons are either transmitted or reflected based on probabilities which are dependent on internal energy, phonon velocity and density of states. We apply the diffuse mismatch model (DMM) to quantify the behavior of phonons at interfaces, which generates probabilities of transmission or reflection through that interface. We have implemented this method for 3D heterogeneous structures with quantized defects. These physics are necessary to include due to the highly mismatched interfaces (such as an interface between a xenon bubble and a surrounding UO$$_{2}$$ lattice).


#### Spectral phonon transport
We have demonstrated grey phonon transport in heterogeneous and homogeneous materials by implementing Boltzmann phonon transport framework into the radiation transport solver Rattlesnake, and can rapidly simulate phenomena in these cases to generate results which are consistent with those in the open literature. However, to fully capture the detail in the phonon spectrum (which can be obtained by performing *ab initio* density functional theory (DFT) simulations) we must simulate spectral phonon transport. Previous efforts to simulate spectral transport effects have not well-considered the tight coupling effects between discrete phonon groups. The method we have developed couples each discrete group to a global average temperature, and we have
derived a new term for the Boltzmann phonon transport equation which accounts for non-equilibrium effects, and conserves the heat flux. We can efficiently simulate and predict thermal conductivity, heat flux, and temperature distributions in dielectrics over a wide geometric range using the full dispersion relation and density of states.


#### Convergence acceleration methods
We found from our spectral transport work that convergence of phonon transport simulations can be unacceptably slow in large spatial domains which are acoustically thick (Knudsen number $$ < 10^{-2}$$). We are currently developing convergence acceleration techniques which leverage proven methods of conv ergence acceleration developed by the neutron and radiation transport
communities. In the acceleration, we perform both high-order (HO) and low-order (LO) simulations, and develop a term which makes the solutions of both the HO and LO systems consistent upon convergence. We anticipate this capability will be finalized before the end of 2019.


***

### Active research areas
* Thermal boundary resistance
* Spectral phonon transport
* Convergence acceleration in phonon transport
* Phonon-phonon scattering
* Sharvin boundary resistance

***

### Upcoming conferences
1.  MS&T 2019: Materials Science & Technology [MS&T 2019](https://www.matscitech.org/MST19/) (Portland, OR)

***

### Publications
* J. Harter, S. Aria Hosseini, T. Palmer, and P.A. Greaney, "Prediction of thermal conductivity in dielectrics using fast, spectrally-resolved phonon transport simulations", *International Journal of Heat and Mass Transfer*, **144**, 118595 (2019). doi:[10.1016/j.ijheatmasstransfer.2019.118595](https://doi.org/10.1016/j.ijheatmasstransfer.2019.118595).

* S. Nimmala, S. Hosseini, J. Harter, T. Palmer, E. Lenz, and P.A. Greaney, "Characterizing Macroscopic Thermal Resistance Across Contacting Interfaces Through Local Understanding of Thermal Transport", *MRS Advances*, 1-7 (2018). doi: [10.1557/adv.2018.485](https://doi.org/10.1557/adv.2018.485).

* J. Harter, L. de Sousa Oliveira, A. Truszkowska, T. Palmer, and P.A. Greaney, "Deterministic Phonon Transport Predictions of Thermal Conductivity in Uranium Dioxide with Xenon Impurities", ASME. *J. Heat Transfer*, **140**(5), 051301-051301-11 (2018). doi: [10.1115/1.4038554](http://heattransfer.asmedigitalcollection.asme.org/article.aspx?articleID=2664747).

* J. Harter, P. A. Greaney, and T. Palmer, "Quantifying the Uncertainty in Deterministic Phonon Transport Calculations of Thermal Conductivity using Polynomial Chaos Expansions", *Trans. Am. Nucl. Soc*, **115**, 611-614 (2016).

* J. Harter, P. A. Greaney, and T. Palmer, "Characterization of Thermal Conductivity using Deterministic Phonon Transport in Rattlesnake," *Trans. Am. Nucl. Soc*, **112**, 829–832 (2015).

* J. Harter, "Predicting Thermal Conductivity in Nuclear Fuels using Rattlesnake-Based Deterministic Phonon Transport Simulations", Master's Thesis. (2015).

***

### Recent conferences and presentations
* J. Harter, N. Whitman, T. Palmer, and P.A. Greaney, "Deterministic phonon transport as a verification tool for spent nuclear fuel", Institute of Nuclear Materials Management Discovery Workshop, *Pacific Northwest National Laboratory*, Richland, WA, May 2018.

* J. Harter, T. Palmer, and P.A. Greaney, ["Deterministic phonon transport and applications in nanoscale heat transfer"](https://github.com/rtrp/osu-transport/blob/gh-pages/users/harterj/files/UofA-phonon.mp4?raw=true), *University of Arizona*, Tuscon, AZ, Apr 2018.

* J. Harter, T. Palmer, and P.A. Greaney, "Frequency dependence in deterministic phonon transport simulations", *Applied Mathematics and Computation Seminar*, Corvallis, OR, Mar 2018.

* J. Harter, T. Palmer, and P.A. Greaney, "Frequency dependence in deterministic phonon transport simulations", *International Conference on Transport Theory*, Monterey, CA, Oct 2017.

* J. Harter, S. Hosseini, T. Palmer, and P.A. Greaney, "Deterministic Simulation of Frequency Dependent Phonon Transport in Nuclear Materials", *Materials Research Society Spring Meeting*, Phoenix, AZ, Apr 2017.

***

### Work history
* Intern at Idaho National Laboratory: July 2018 - present.
  * Implementing cross section generation and treatments for the MAMMOTH and Rattlesnake codes
  * Completing my PhD
* Intern at Los Alamos National Laboratory: June - October 2017
  * Developed fission gas diffusion model in BISON using radiation cluster dynamics methodologies
* Intern at Idaho National Laboratory: June - September 2016
  * Wrote initial physics model of thermal boundary resistance for deterministic phonon transport
  * Developed thermo-mechanical model of nuclear fuel irradiation experiment with BISON
* Intern at Idaho National Laboratory: June - September 2015
  * Couple phonon mean free path to phase-field model to implement evolving transport simulation geometry
* Intern at NuScale Power: July 2013 - January 2015
  * Probabilistic risk assessment and RELAP5 simulations of NuScale small modular reactor

***

### Personal interests
I love Oregon and the west coast. I'm into fly fishing, yoga, shooting guns, cooking, H.P. Lovecraft, old science fiction, rare cooking/science books, computer games, board games, and much more.

***

### Interesting news articles
* [Shifting the Conversation - A New Era of Nuclear Dialogue](http://ansnuclearcafe.org/2015/12/10/shifting-the-conversation-a-new-era-of-nuclear-dialogue/#sthash.v1NPlNvq.dpbs)
* [Scientists discover light could exist in a previously unknown form](http://phys.org/news/2016-08-scientists-previously-unknown.html)

***

[^1]: Assistant Professor, Department of Mechanical Engineering and MS&E Program, University of California - Riverside
