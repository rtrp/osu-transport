---
title: Massimo-Personal
layout: default
author: Massimo Larsen
---

# Massimo Larsen

---

I am a graduate student at Oregon State University working in the Radiation Transport and Reactor Physics group with a focus on Monte Carlo methods. I currently work with Los Alamos National Lab (LANL) in the XCP-3 group. XCP-3 is LANL's primary Monte Carlo methods division best known for developing and maintaining MCNP.

I received my B.S. in Nuclear Engineering from the University of California, Berkeley in 2020.

## Current Research

---

### Quasi Monte Carlo

My current research focuses on the implementation of Quasi Monte Carlo methods, for use in radiography calculations, into full scale production codes at LANL. QMC differs from normal MC in it's use of non-pseudorandom number generators. Instead, QMC employs a low-discrepancy sequence which helps to significantly reduce the convergence rate when compared to it's random counterpart.

I am working on two different approaches to implement into LANL's radiography code. Both of the methods will be implemented on solely the source parameters while leaving the rest of the Monte Carlo code unchanged. The first method is a very standard implementation of the halton sequence which provides the exact low-discrepancy number generation that we need. The second method is slightly more out of the ordinary and uses a python package of the VEGAS algorithm (https://vegas.readthedocs.io/en/latest/index.html) to produce numbers that are biased similarly to something like importance sampling.

---

## Other Interests

Cycling, coffee, cooking