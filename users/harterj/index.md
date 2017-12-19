---
title: Jackson-personal
layout: default
author: Jackson Harter
---
Jackson R. Harter
================================

<img src="{{ site.url }}users/harterj/images/jrhIdaho.jpg" height="300" width="300">

I am in my 2nd year as a PhD student at Oregon State University. My advisor is Todd Palmer and my co-advisor is Alex Greaney[^1]. I am a member of the <a href="http://alexgreaney.com/" target ="blank">Computational Materials Group</a> at UC Riverside, and the President of the student section of the American Nuclear Society here at OSU.

Email: <a href="mailto:harterj@oregonstate.edu" target="top"> harterj@oregonstate.edu </a>  
You can find my resume [here](./files/jacksonResume.pdf).

***

## Research areas
We are interested in simulating deterministic phonon transport using the code Rattlesnake (written in the
<a href="http://mooseframework.org/" target="blank">MOOSE</a> framework) to predict thermal conductivity in nuclear fuels operating at high temperatures with isotopic defects and evolving microstructures. We are developing a framework to bridge the gap between the atomistic and engineering scale, and collaborate with <a href="http://www.engr.ucr.edu/faculty/me/AlexanderGreaney.html" target="blank">Dr. Alex Greaney</a> and his research group at UC Riverside.


We have shown Rattlesnake to be an effective and efficient engine for simulating homogeneous phonon transport; it solves the frequency independent equation of phonon radiative transfer in the Self-Adjoint Angular Flux formulation using the single mode relaxation time approximation. We are interested in phonon transport at high temperatures and therefore must implement multifrequency transport to model these physics effectively, in addition to considering contributions from anharmonic three- and four-phonon processes.


#### Thermal boundary resistance
Phonons crossing a material interface experience a phenomenon known as *thermal boundary resistance* (TBR), unlike neutrons which rely on a cross section of interaction to dictate their scattering behavior in materials. TBR occurs when phonons cross an interface; phonons are either transmitted or reflected based on probabilities which are dependent on internal energy, phonon velocity and density of states. We apply the diffuse mismatch model (DMM) to quantify the behavior of phonons at interfaces, which generates probabilities of transmission or reflection through that interface. We have implemented this method for 3D heterogeneous structures with quantized defects. These physics are necessary to include due to the highly mismatched interfaces (such as an interface between a xenon bubble and a surrounding UO$$_{2}$$ lattice).


#### Multi-frequency phonon transport
We have previously developed the capability of phonon transport in the gray approximation -- analogous to one-speed thermal radiation transport. This approach is beneficial in the rapid development of methodologies but falls short in highly resolved predictions of heat flux and thermal conductivity. We leverage the multi-group capability present in Rattlesnake to simulate multi-frequency phonon transport. We take data generated through *ab-initio* density functional theory (DFT) simulations by our colleagues at the UC Riverside campus and integrate it into our Boltzmann phonon transport simulations. While this capability is still in development, we have simulated temperature gradients, heat flux and thermal conductivity in silicon. We can show the contribution to overall thermal conductivity from each phonon polarization, mode, frequency and predict an average value of $$\kappa$$ in the material.

***

### Current projects
* Active research
  * Thermal boundary resistance physics
  * Frequency dependent phonon transport
  * Convergence acceleration of phonon transport simulations
  * Simulating anharmonic interaction between phonons

***

### Upcoming conferences
1.  NuMat 2018: The Nuclear Materials Conference [NuMat 2018](https://www.elsevier.com/events/conferences/the-nuclear-materials-conference) (Seattle, WA)

***

### Publications
* J. HARTER, L. DE SOUSA OLIVEIRA, A. TRUSZKOWSKA, T. PALMER, and P.A. GREANEY, "Deterministic Phonon Transport Predictions of Thermal Conductivity in Uranium Dioxide with Xenon Impurities", *J. Heat Transfer*. 2017; HT-16-1523; doi: [10.1115/1.4038554](http://heattransfer.asmedigitalcollection.asme.org/article.aspx?articleid=2664747).

* J. HARTER, P. A. GREANEY, and T. PALMER, "Quantifying the Uncertainty in Deterministic Phonon Transport Calculations of Thermal Conductivity using Polynomial Chaos Expansions", *Trans. Am. Nucl. Soc*, **115**, 611-614 (2016).

* J. HARTER, P. A. GREANEY, and T. PALMER, "Characterization of Thermal Conductivity using Deterministic Phonon Transport in Rattlesnake," *Trans. Am. Nucl. Soc*, **112**, 829–832 (2015).

***

### Work history
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
I love Oregon and the west coast. I'm into fly fishing, yoga, shooting guns, cooking, H.P. Lovecraft, old science fiction, rare cooking/science books, computer games, board games, and have many more interests.

***

### Interesting news articles
* [Shifting the Conversation - A New Era of Nuclear Dialogue](http://ansnuclearcafe.org/2015/12/10/shifting-the-conversation-a-new-era-of-nuclear-dialogue/#sthash.v1NPlNvq.dpbs)
* [Scientists discover light could exist in a previously unknown form](http://phys.org/news/2016-08-scientists-previously-unknown.html)

***

[^1]: Assistant Professor, Department of Mechanical Engineering and MS&E Program, University of California - Riverside
