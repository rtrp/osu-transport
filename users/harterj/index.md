---
title: Jackson-personal
layout: default
author: Jackson Harter
---
Jackson R. Harter
================================

<img src="{{ site.url }}users/harterj/images/jrhIdaho.jpg" height="375" width="375">

I am in my 2nd year as a PhD student at Oregon State University. My advisor is Todd Palmer and my co-advisor is Alex Greaney[^1].

Email: <a href="mailto:harterj@oregonstate.edu" target="top"> harterj@oregonstate.edu </a>  
You can find my resume [here](./files/jacksonResume.pdf).

***

## Research
We are interested in simulating deterministic phonon transport using the code Rattlesnake (written in the
<a href="http://mooseframework.org/" target="blank">MOOSE</a> framework) to predict thermal conductivity in nuclear fuels operating at high temperatures with isotopic defects and evolving microstructures. We are developing a framework to bridge the gap between the atomistic and engineering scale, and collaborate with <a href="http://www.engr.ucr.edu/faculty/me/AlexanderGreaney.html" target="blank">Dr. Alex Greaney</a> of UC Riverside and <a href="https://github.com/dschwen" target="blank">Daniel Schwen</a> of
<a href="https://www.inl.gov/" target="blank">Idaho National Laboratory</a>.


We have shown Rattlesnake to be an effective and efficient engine for simulating homogeneous phonon transport; it solves the frequency independent equation of phonon radiative transfer in the Self-Adjoint Angular Flux formulation using the single mode relaxation time approximation. However, we are interested in phonon transport at high temperatures and therefore must implement multifrequency transport to model these physics effectively, in addition to considering contributions from anharmonic three- and four-phonon processes.


#### Thermal boundary resistance
Phonons crossing a material interface experience a phenomenon known as *thermal boundary resistance* (TBR), unlike neutrons which rely on a cross section of interaction to dictate their scattering behavior in materials. TBR occurs when phonons cross an interface; phonons are either transmitted or reflected based on probabilities which are dependent on internal energy, phonon velocity and density of states. We apply the diffuse mismatch model (DMM) to quantify the behavior of phonons at interfaces, which generates probabilities of transmission or reflection through that interface. We have developed this model for homogeneous materials, and are working to implement it for heterogeneous cases.

<img src="{{ site.url }}users/harterj/images/tbrSilicon.bmp">

These physics are necessary to include due to the highly mismatched interfaces (such as a $$\textrm{UO}_{2}$$-Xe interface) we encounter when conducting phonon transport simulations. A rendering of such an interface is shown below, where we see a bubble of xenon in a $$\textrm{UO}_{2}$$ lattice. The xenon bubble has radius of 1 nm.

<img src="{{ site.url }}users/harterj/images/uo2xe_interface.png">


#### Multi-frequency phonon transport
We have previously developed the capability of phonon transport in a gray approach -- analogous to one-speed neutron transport. This approach is beneficial in the rapid development of methodologies but falls short in the highly resolved prediction of heat flux and thermal conductivity. We leverage the multi-group capability present in Rattlesnake to simulate multi-frequency phonon transport. We take data generated through *ab-initio* density functional theory (DFT) (via the Vienna Ab-initio Simulation Package (VASP)) simulations by our colleagues at the UC Riverside campus and integrate it into our Boltzmann phonon transport simulations. While this capability is still under development, we have simulated temperature gradients, heat flux and thermal conductivity in silicon. We can show the contribution to overall thermal conductivity from each phonon polarization, mode, frequency and predict an average value of $$\kappa$$ in the material. Our thermal conductivity results are comparable to the study by Mazumder and Majumdar[^2], though we do not include anharmonic scattering or defect scattering (which would further alter our results).

Here we show thermal conductivity from our transport simulations ($$\kappa$$) compared to thermal conductivity predicted by the mechanistic relation $$\hat{\kappa} = \frac{1}{3}C_{v}v_{g}\Lambda$$, where $$C_{v}$$ is specific heat capacity at constant volume, $$v_{g}$$ is phonon group velocity and $$\Lambda$$ is phonon mean free path. In all plots, *p* is polarization and *g* is group.
<img src="{{ site.url }}users/harterj/images/kappaCompare.bmp">

Here we show the dispersion relation in silicon. Due to the isotropy of silicon some of the modes overlap (TA = transverse acoustic, LA = longitudinal acoustic, TO = transverse optic, LO = longitudinal optic).
<img src="{{ site.url }}users/harterj/images/dispersion.bmp">

Here we show the acoustic thickness of each of the groups and polarizations. It is clear that some of the groups are quite acoustically "thick" and slow down the convergence properties in the overall band. It may be advantageous to "cut off" some of these highly thick modes, as they have a low group velocity and thus do not contribute much to overall thermal conductivity of the material. We are investigating the convergence acceleration of our transport simulations.
<img src="{{ site.url }}users/harterj/images/zeta.bmp">


***

## Current projects
* Dissertation
  * Generating proposal for upcoming prelim defense
* Research
  * Implementing thermal boundary resistance physics model
  * Frequency dependent phonon transport capability
  * Convergence acceleration of phonon transport simulations
  * Simulating anharmonic interaction between phonons
<!-- $$
-\Lambda\left(\omega,p\right) \vec{\Omega}\cdot \left[\Lambda\left(\omega,p\right)\vec{\Omega}\cdot \vec{\nabla} \psi\left(\vec{r},\vec{\Omega},\omega,p\right)\right] + \psi\left(\vec{r},\vec{\Omega},\omega,p\right) = -\Lambda\left(\omega,p\right)\vec{\Omega}\cdot \vec{\nabla}\phi^{0}\left(\vec{r},\omega,T,p\right) + \phi^{0}\left(\vec{r},\omega,T,p\right)
$$ -->

***

### Upcoming conferences
* Materials Research Society Spring Meeting, Phoenix, AZ. April 2017
  * "Deterministic Simulation of Frequency Dependent Phonon Transport in Nuclear Materials"

***

### Publications
* J. HARTER, T. PALMER, and P.A. GREANEY, "Deterministic Phonon Transport Predictions of Thermal Conductivity in Uranium Dioxide with Xenon Impurities", *Journal of Heat Transfer*, **in review**.

* J. HARTER, P. A. GREANEY, and T. PALMER, "Quantifying the Uncertainty in Deterministic Phonon Transport Calculations of Thermal Conductivity using Polynomial Chaos Expansions", *Trans. Am. Nucl. Soc*, **115**, 611-614 (2016).

* J. HARTER, P. A. GREANEY, and T. PALMER, "Characterization of Thermal Conductivity using Deterministic Phonon Transport in Rattlesnake," *Trans. Am. Nucl. Soc*, **112**, 829–832 (2015).

***

### Work history
* Intern at Idaho National Laboratory: June - September 2015, June - September 2016
  * Writing physics model of thermal boundary resistance for deterministic phonon transport
  * Developed thermo-mechanical model of nuclear fuel irradiation experiment with BISON
  * Couple phonon mean free path to phase-field model to implement evolving transport simulation geometry
* Intern at NuScale Power: July 2013 - January 2015
  * Probabilistic risk assessment and RELAP5 simulations of NuScale small modular reactor

***

### Personal interests
I love Oregon and the west coast. I have a lot of interests but these tend to rotate based on the season and how busy
I am.

***

### Interesting news articles
* [Shifting the Conversation - A New Era of Nuclear Dialogue](http://ansnuclearcafe.org/2015/12/10/shifting-the-conversation-a-new-era-of-nuclear-dialogue/#sthash.v1NPlNvq.dpbs)
* [Scientists discover light could exist in a previously unknown form](http://phys.org/news/2016-08-scientists-previously-unknown.html)

***

[^1]: Assistant Professor, Department of Mechanical Engineering and MS&E Program, University of California - Riverside
[^2]: S. MAZUMDER and A. MAJUMDAR, "Monte Carlo Study of Phonon Transport in Solid Thin Films Including Dispersion and Polarization," *Journal of Heat Transfer*, **123**, 749-759 (2001).
