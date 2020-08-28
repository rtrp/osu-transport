---
title: Nick-personal
layout: default
author: Nick Whitman
---
Nick Whitman
================================

<img src="{{ site.url }}users/whitmann/images/headshot.jpg" height="250" width="250">

Email: <a href="mailto:whitmann@oregonstate.edu" target="top"> whitmann@oregonstate.edu </a>

<a href="https://www.linkedin.com/in/nick-whitman-0034477b" target="top"> LinkedIn </a>

I am a fourth year Ph.D. student at Oregon State University under the direction of Dr. Todd Palmer in the Radiation Transport and Reactor Physics (RTRP) research group. I received my B.S. in Nuclear Engineering from Texas A&M University in May, 2016.

My current research involves solving the radiative transport equation for phonons to predict thermal conductivity in ceramics. My previous work and research could be summarized as: neutronic modeling of small special purpose nuclear power systems, dosimetry activation predictions inside research reactors, and modeling and analysis of sodium fast reactor shielding experiments.

***

## Research
* Lithium Aluminate is a ceramic breeder material that is of interest in the fusion community. Lithium Aluminate drastically changes microstructure and porosity as a function of neutron irradiation. These parameters directly impact the thermal performance properties of the ceramic. Certainty in thermal performance parameters is necessary for accurate and reliable modeling. The current fuel performance tools used by PNNL do not agree well with experimental data.

* Due to phonon transport being the primary heat transport mechanism in ceramic materials, Oregon State University and PNNL have partnered to develop a higher-fidelity mechanistic model based on phonon transport to approximate the thermal conductivity tensor in irradiated Lithium Aluminate. This model will eventually depend on the material microstructure, vacancy densities, defects and various other parameters that highly impact heat transport at the macro to micro-scale.

* We have developed an arbitrarily higher-order finite element radiation transport solver compatible with curved surfaces utilizing MFEM. This transport solver employs the Self-Adjoint Angular Flux (SAAF) formulation of the radiative transport equation using the Discrete Ordinates (Sn) approximation.

* Preliminary results simulating temperature profiles in silicon and lithium aluminate match previously published work

<img src="{{ site.url }}users/whitmann/images/temp-profile.png" height="250" width="250">

* Thermal conductivity profiles also show depression at the boundary as expected and match kinetic theory in the interior of the domain where application of diffuse treatment is expected

<img src="{{ site.url }}users/whitmann/images/k-profile.jpg" height="250" width="250"> <img src="{{ site.url }}users/whitmann/images/k-diff.jpg" height="250" width="250">

***

## Journal Publications
* **N. WHITMAN**, T. PALMER, P. GREANEY, S. HOSSEINI, D. BURKES, and D. SENOR, "Grey Phonon Transport Prediction of Thermal Conductivity in Lithium Aluminate with Higher-Order Finite Elements on Meshes with Curved Surfaces", *Proceedings of ICTT-2019 - Journal of Computational and Theoretical Transport*, (In Review).

## Extended Summaries
* **N. WHITMAN**, T. PALMER, P. GREANEY, D. ANISTRATOV, D. BURKES, and D. SENOR, "Consistent Temperature and Intensity Calculations from Deterministic Multi-Frequency Phonon Transport", *Trans. Am. Nucl. Soc*, (In Review).

* **N. WHITMAN**, T. TRAHAN, and J. HUTCHINSON, "Validation of MCATK: Comparison to Subcritical Copper and Polyethylene Reflected Plutonium Experiments at NCERC", *Trans. Am. Nucl. Soc*, (In Review).

* **N. WHITMAN**, and J. HADER, "Attila and MCNP6.2 Validation with the JASPER-IHX Benchmark for Sodium-cooled Fast Reactor Shielding Applications", *Trans. Am. Nucl. Soc.*, **121**, 1267-1270 (2019).

* **N. WHITMAN**, T. HUGHES, J. KELSEY, A. MORELL-PACHECO, and P. TSVETKOV, "VASIMR Interfaced High Temperature Gas-Cooled Fast Reactor for Space Applications", *Trans. Am. Nucl. Soc.*, **115**, 80-83 (2016).

* **N. WHITMAN**, and B. COX, "Characterization of the Pulsed Radiation Environment in FREC-II at the ACRR", *Trans. Am. Nucl. Soc*, **115**, 1074-1077 (2016).

* **N. WHITMAN**, P. MCCLURE, and D. POSTON, "Modeling and Analysis of the BUK/RES-5 Fast Reactor Using MCNP”. *LA-UR-15-25998*, (2015).

***

## Presentations
* ***American Nuclear Society (ANS) Mathematics and Computational (M&C) Division*** *Raleigh, North Carolina* April, 2021

* ***American Nuclear Society (ANS) Winter Meeting 2019*** *Washington, D.C.* November, 2019

* ***International Conference on Transport Theory (ICTT)*** **Pierre and Marie Curie Campus (PMCC) at Sorbonne University** *Paris, France* September 22-27, 2019

* ***Institute of Nuclear Materials Management (INMM)*** **Nuclear Materials Science, Processing and Signature Discovery Workshop** *Richland, Washington* May, 2018

* ***Pacific Northwest National Laboratory (PNNL)*** **National Security Directorate's Student Poster Presentation** *Richland, Washington* Summer 2017

* ***American Nuclear Society (ANS) Winter Meeting 2016*** **Student Design Competition** *Las Vegas, Nevada* November, 2016

* ***Los Alamos National Laboratory (LANL)*** **W-Division Student Poster Presentation** *Los Alamos, New Mexico* August, 2016

***

## Work Experience
* ***Los Alamos National Laboratory (LANL)***
  * **XCP-3: Monte Carlo Methods, Codes, and Applications**, Mentors: Travis Trahan (XCP-3) and Jesson Hutchinson (NEN-2), *June - September 2020*
    * Verification and validation of the Subcritical Reflected alpha-Plutonium (SCRaP) experiments performed at NCERC using the Monte Carlo Application ToolKit (MCATK) software. The SCRaP experiments involved sixteen configurations of an alpha-phase, weapons grade Plutonium sphere surrounded by varying layers of copper and polyethylene reflectors and two Helium-3 multiplicity counters. Analysis included comparisons of MCATK to MCNP and measured values of multiplication factor, multiplication, count rates, and other counting parameters such as Feynman variance-to-mean.

* ***TerraPower, LLC***
  * **Nuclear Design Group - Shielding Methods and Analysis**, Mentors: Jacob Hader & Oded Doron, *June - September, 2019*
    * Performed verification and validation for Attila's variance reduction plugin for MCNP in the Sodium Fast Reactor design space. The *Shielding Integral Benchmark Archive and Database* <a href="https://www.oecd-nea.org/science/wprs/shielding/" target="top"> **(SINBAD)** </a> *Japanese American Shielding Program for Experimental Research* <a href="https://www.oecd-nea.org/science/wprs/shielding/sinbad/JAS_IHX/IHX_A.HTM" target ="top"> **(JASPER)** </a> series of experiments were chosen to examine neutron transport in sodium and the subsequent sodium activation in the intermediate heat exchanger (IHX). This work was performed to investigate biases and bounding limits for sodium activation in SFR systems.

* ***Pacific Northwest National Laboratory (PNNL)***
  * **Nuclear Engineering Division - Nuclear Fuels and Materials Team**, Mentors: Doug Burkes & David Senor, *June - September 2017*
    * Explored, analyzed, and debugged a test suite on the open-source lattice physics neutron transport code OpenMOC to perform scoping for a phonon transport solver

* ***Los Alamos National Laboratory (LANL)***
  * **W-13: Advanced Engineering Analysis**, Mentor: Bradley Cox (W-13), *May - September 2016*
    * Assisted with pulsed neutron experiments to compare computer models in MCNP to active and passive radiation dosimetry measurement data in the Fuel Ringed External Cavity (FREC-II) at the Annular Core Research Reactor (ACRR) at Sandia National Laboratories in order to assist in preparation for the Depleted Uranium Strain and Temperature - Enhanced Response (DUSTER-II) test series.

  * **NEN-5: Systems Design and Analysis**, Mentor: David Poston (NEN-5), *June - August 2015*
    * Researched and developed a reactor model in MCNP for the Soviet BUK/RES-5 liquid metal cooled fast reactor used in reconnaissance satellites during the Cold War era. Assembled reactor information from several unofficial reports, papers, and sketches. Confirmed unofficial approximate reported fuel loading, total mass, uranium content as well as several reactor parameters such as control drum insertion worth.

***

## Extracurricular Interests
* Hiking, mountain biking, backpacking, golfing with both frisbee and with clubs, cross-country and downhill skiing, pc gaming, cooking, photography
