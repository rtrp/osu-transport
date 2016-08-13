---
title: Doug-personal
layout: default
author: Doug Woods
---

Doug Woods
==============

woodsdou@oregonstate.edu

[comment]: # ([https://web.engr.oregonstate.edu/~woodsdou/wiki/HomePage](https://web.engr.oregonstate.edu/~woodsdou/wiki/HomePage))

<img src="{{ site.url }}users/woodsdou/images/Doug%20Woods%20Three%205%20to%207%20crop.JPG" width="200">

I am a Ph.D. candidate in Nuclear Engineering in the [School of Nuclear Science and Engineering](https://ne.oregonstate.edu) at [Oregon State University](https://oregonstate.edu). My major advisor is [Todd Palmer](https://rtrp.github.io/osu-transport/palmerts/). I am also a licenced reactor operator for the [Oregon State TRIGA Reactor](http://radiationcenter.oregonstate.edu/oregon-state-triga-reactor-0).

***

## Research

We have demonstrated the feasibility of high-order finite element radiation transport using meshes with curved surfaces using the open source finite element library [MFEM](https://mfem.org). The image below[^1] illustrates a mesh with 3<sup>rd</sup> order polynomial curved surfaces.

<img src="{{ site.url }}users/woodsdou/images/AdamsDiff2DwMeshBlue.png" width="450">

With mesh refinement and/or increasing the finite element order, we see solutions converging to the analytic solution. The data points on the following image[^1] show errors between the DGFEM transport solution and the analytic MMS solution. Lines connect data points calculated using the same finite element order.

<img src="{{ site.url }}users/woodsdou/images/plotConvergenceRates_15.png" width="400">

Diffusion limit calculations can exhibit unphyisical oscillations in the boundary layer solution. If the solution is near zero, the oscillations will cause the solution to drop below zero as seen by white space in the image below[^1]. In the context of thermal radiation transport, negative fluxes mean negative temperatures, which can lead to the equations of state to calculate negative densities and pressures.

<img src="{{ site.url }}users/woodsdou/images/TP1Log.png" width="500">

These oscillations can also be seen in problems with varying material opacities. The image below[^1] is the solution to a multi-material problem with opacities ranging several orders of magnitude, similar to thermal radiation transport problems of practical interest. Oscillations can be seen in various regions of the problem.

<img src="{{ site.url }}users/woodsdou/images/TP3.png" width="450">

***

## Presentations
* American Nuclear Society Summer Meeting, New Orleans, LA, June 2016
* OSU Graduate Research Expo, Portland, OR, March 2016
* OSU Graduate Research Expo, Portland, OR, March 2015
* ANS Student Conference, Boston, MA, April 2013
* ANS Student Conference, Las Vegas, NV, April 2012

***

## Publications
[^1] Douglas N. Woods, Thomas A. Brunner, and Todd S. Palmer, "High Order Finite Elements *S<sub>N</sub>* Transport in X-Y Geometry on Meshes with Curved Surfaces", *Transactions of the American Nuclear Society*, **114**, 377–380 (2016).

[^2] Douglas N. Woods, "High Order Finite Elements *S<sub>N</sub>* Transport in X-Y Geometry on Meshes with Curved Surfaces in the Thick Diffusion Limit", Masters Thesis (2016).

***

## Personal interests
Soccer, snowboarding, hiking, camping, rock climbing, reading, traveling, sailing

***

## Interesting news articles

## Other Projects

* [OpenCL and OpenGL particle system]({{ site.url }}users/woodsdou/ParticleSystem/ParticleSystem.md)
* [Inverse transport/diffusion problem]({{ site.url }}users/woodsdou/InverseProblem/InverseProblem.md)
