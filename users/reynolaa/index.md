---
title: Aaron-Personal
layout: default
author: Aaron James Reynolds
---
Aaron James Reynolds
==============

<img src="{{ site.url }}users/reynolaa/images/gitpic.jpg" height="300">

[LinkedIn](https://www.linkedin.com/in/aaron-james-reynolds-23b0b9a1/)

I am a graduate student working in the Radiation Transport and Reactor Physics group at Oregon State University.
I focus on the development of computational tools for circulating fuel reactors. Dr. Todd S. Palmer is my advisor.

# Research Interests

## Circulating fuel reactor kinetics

__Molten salt reactors__ (MSRs) are a class of next-generation reactor concepts that benefits from a large negative
temperature coefficient of reactivity, on-line refueling and fission-product removal, and elimination of costly fuel fabrication.

In one branch of MSR concepts, fissile fuel is mixed throughout a circulating molten salt coolant,
creating a fluid-fuel mixture. 
In a fluid-fuel system, delayed neutron precursors can move from the location
of the initiating fission event before decaying. 
This can significantly affect reactor kinetics when compared to a solid-fuel system. 

![Homogeneous simulation](images/homogeneous.gif)

Consider the above simulation in cylindrical geometry with dimensions approximately equal to the those in the Molten Salt Reactor Experiment (R = 70cm and Z = 150cm). 
The nuclear data is made up, but features a negative temperature coefficient of reactivity.

* __0.25 seconds__ the flux is initially centered where the delay neutron precursors peak, which is not at midline due to precursor advection
* __2.00 seconds__ as the precursors move, the flux follows 
* __3.00 seconds__ as the flux grows, more energy is deposited in the core and the temperature increases
* __4.50 seconds__ the negative temperature feedback becomes significant and the flux shifts to the inlet of the core

Three delayed neutron precursor groups are shown. 
Group 0 is the longest live, Group 5 is the shortest lived, and Group 3 is somewhere in between.

* Significant recirculation of the Group 0 precursors is observed, but in Group 5, where the delayed neutron precursors decay rapidly, very little recirculation is seen.

This simulation was produced with __QuasiMolto__ ([repository here](https://github.com/aaronjamesreynolds/QuasiMolto)), a computational tool I developed as part of my dissertation research.
QuasiMolto uses a __multilevel nonlinear projective method__ to produce the __transport solution__ above, and can do so for an arbitrary number of neutron energies and delayed neutron precursor groups.

## Oak Ridge National Laboratory

I have spent the summers of 2018 and 2019 at Oak Ridge National Laboratory with the NESLS program. 
While there I worked in the Consortium for the Advanced Simulation of Light Water Reactors developing on the Virtual Environment for Reactor Applications (VERA). 
Specifically, my work involved extending the __fuel performance modeling__ capabilities of __VERA__ to include some __accident tolerant fuel materials__ and enabling __control rod depletion__ in __MPACT__. 

## Published and Presented Work

(In progress)
Reynolds, Aaron J., Palmer, Todd S.
"A Multilevel Nonlinear Projective Method and Residual-Balanced Iterative Algorithm for Circulating Fuel Reactor Kinetics." 
M&C 2021 organized by the American Nuclear Society.

(Accepted) 
Reynolds, Aaron J., Stimpson, Shane G., Graham, Aaron M.
"Initial Control Rod Depletion Development in MPACT." 
Transaction of the American Nuclear Society to be presented at 2020 American Nuclear Society Meeting & Expo.

Reynolds, Aaron J., Palmer, Todd S. 
"A Projective Method for Solving the Single-Group Space-Time Neutron Kinetics Equations with Precursor Advection." 
Conference paper and presentation for M&C 2019 organized by the American Nuclear Society.

Reynolds, Aaron J., Stimpson, Shane G., Gardner, Russell. 
"Initial Accident Tolerant Fuel/Cladding Extensions to the VERA to Bison Offline Coupling." 
Conference paper and presentation for Global/Top Fuel 2019 organized by the American Nuclear Society.

# Other Interests

I am a self-published singer-songwriter whose neighbors have learned to tolerate the guitar, banjo, and harmonica.
I'm also an avid runner, reader, and amateur watchmaker.
