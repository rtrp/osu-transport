---
title: Doug-personal
layout: default
author: Doug Woods
---
Doug Woods
==============

<a href="mailto:woodsdouoregonstate.edu" target="top"> woodsdou@oregonstate.edu </a>  
[Resume](./Resume_Public.pdf).

[comment]: # ([https://web.engr.oregonstate.edu/~woodsdou/wiki/HomePage](https://web.engr.oregonstate.edu/~woodsdou/wiki/HomePage))

<img src="{{ site.url }}users/woodsdou/images/Doug%20Woods%20Three%205%20to%207%20crop.JPG" width="200">

I am a Ph.D. candidate in Nuclear Engineering in the [School of Nuclear Science and Engineering](https://ne.oregonstate.edu) at Oregon State University. My major advisor is [Todd Palmer](https://rtrp.github.io/osu-transport/palmerts/). I am also a licenced reactor operator for the [Oregon State TRIGA Reactor](http://radiationcenter.oregonstate.edu/oregon-state-triga-reactor-0).

***

## Research

We have demonstrated the feasibility of high-order dicontinuous Galkergin finite element (DGFEM) radiation transport using meshes with curved surfaces using the open source finite element library [MFEM](https://mfem.org). The image below illustrates a mesh with 3<sup>rd</sup> order polynomial curved surfaces.

<img src="{{ site.url }}users/woodsdou/images/AdamsDiff2DwMeshBlue.png" width="450">

#### Accuracy

With mesh refinement and/or increasing the finite element order (i.e. increase the number of degrees of freedom), we see solutions converging to the manufactured solution. The data points on the following image [[1]](#ANS1) show errors between the DGFEM transport solution and the analytic MMS solution. Lines connect data points that were calculated using the same finite element order. The slope of the lines indicate the rate of convergence is (p+1). Remarkably, curvature of the mesh has little influence on the convergence rates.

<img src="{{ site.url }}users/woodsdou/images/plotConvergenceRates_15.png" width="400">

#### Diffusion Limit

Diffusion limit calculations can exhibit unphysical oscillations. If the solution is near zero, the oscillations will cause the solution to drop below zero as seen by white space in the image below. In the context of thermal radiation transport, negative fluxes result in negative temperatures, which can lead to the equations of state calculating negative densities and pressures. We smoothly model this exponential solution, which changes over 22 orders of magnitude.

<img src="{{ site.url }}users/woodsdou/images/TP1Log.png" width="500">

These oscillations can also be seen in problems with varying material cross sections. The image below is the solution to a heterogeneous problem with cross sections ranging several orders of magnitude, similar to thermal radiation transport problems of practical interest. Oscillations are primarily seen in highly a absorbing region.

<img src="{{ site.url }}users/woodsdou/images/TP3.png" width="450">

#### Diffusion Synthetic Acceleration

The source iteration (SI) method converges arbitrarily slowly for highly scattering and diffusive problems. We implement the modified interior penalty (MIP) DSA developed by Wang and Ragusa (2010) to accelerate the SI. In the image below, we investigate the convergence rates for various finite element orders. We see accelerated convergence for all cell sizes. Again, curvature of the mesh surfaces has relatively little influence on the spectral radii.

<img src="{{ site.url }}users/woodsdou/images/ConvRateC4Ortho.png" width="1000">

***

## Publications

1. <a name="ANS_DSA"></a>Douglas N. Woods and Todd S. Palmer, "Diffusion Synthetic Acceleration for High Order *S<sub>N</sub>* Transport on Meshes with Curved Surfaces", *Transactions of the American Nuclear Society*, **In Review**.

2. <a name="ANS1"></a>Douglas N. Woods, Thomas A. Brunner, and Todd S. Palmer, "High Order Finite Elements *S<sub>N</sub>* Transport in X-Y Geometry on Meshes with Curved Surfaces", *Transactions of the American Nuclear Society*, **114**, 377–380 (2016).

3. Douglas N. Woods, "High Order Finite Elements *S<sub>N</sub>* Transport in X-Y Geometry on Meshes with Curved Surfaces in the Thick Diffusion Limit", Masters Thesis (2016).

***

## Presentations
* ANS Summer Meeting, San Francisco, CA, June 2017
* OSU College of Engineering Graduate Research Showcase, Corvallis, OR, February 2017
* American Nuclear Society Summer Meeting, New Orleans, LA, June 2016
* OSU Graduate Research Expo, Portland, OR, March 2016
* OSU Graduate Research Expo, Portland, OR, March 2015
* ANS Student Conference, Boston, MA, April 2013
* ANS Student Conference, Las Vegas, NV, April 2012

***

## Other Projects

* [OpenCL and OpenGL particle system](./ParticleSystem/)
* [Inverse transport/diffusion problem](./InverseProblem/)

***

## Interesting news articles

***

## Personal interests
Soccer, snowboarding, motorcycling, sailing, rock climbing, hiking, camping, reading, traveling
