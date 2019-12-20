---
title: Wiki
layout: default
author: Doug, Jackson, & Tony
---

Welcome!
This wiki page is for current or future student who are interested in Dr. Palmer's research group.
Our interests vary from accelerated transport methods, to core design, isotope production, and the use of advanced computational techniques to solve large scale problems.
We have provided some useful links to help current students (or just the casual passerby) find information on simulation tools available, thesis formatting, etc.
Along with this we have provided an interactive section (via Google Colab/Jypter Notebooks) for others to examine the work we have done to get a feel for our projects.

# Available Software
Some software available through [Citrix](http://it.engineering.oregonstate.edu/citrix).

## Code Reference Resources
* [Unix Shell](http://swcarpentry.github.io/shell-novice/)
* [C++](http://www.learncpp.com/)
* [Python3](https://docs.python.org/3/), [Python2](https://docs.python.org/2/)
* [MATLAB](http://www.mathworks.com/help/matlab/)
  - [FREE - Matlab’s Online Training Courses](https://matlabacademy.mathworks.com/)
* [Markdown](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet) - what this website was written in ::
* And most importantly.... [Google](https://www.google.com/)
  -  Leads to StackExchange mostly. *Can* be a great reference and a cool place to ask the programming community questions.

## Simulation Tools
A brief and non-exhaustive list of software NSE has access to. Please note that some of these are export controlled software and require proper permissions. If you need access to them, just ask. ([OSU VPN](http://oregonstate.edu/helpdocs/network-and-phone/virtual-private-network-vpn), [Access network drive](https://it.engineering.oregonstate.edu/accessing-engineering-file-space-using-windows-file-sharing))

##### [Rogue](https://it.engineering.oregonstate.edu/nuclear-science-and-engineering-computing-support) (NSE Linux Workstation)
* [Attila](https://www.varian.com/x-ray-imaging-components/products/security-industrial-imaging/attila-software-suite) - Radiation Transport
* [CASMO/SIMULATE](http://www.studsvik.com/sv/Verksamhetsomraden/Bransle--och-materialteknik/Programvara-for-bransleoptimering/In-Core-Fuel-Management/CASMO5/) - LWR Lattice Physics and Fuel Management
* [MCNP 5/6/X](https://mcnp.lanl.gov/) - General Monte Carlo Transport ([getting started](https://it.engineering.oregonstate.edu/nuclear-science-and-engineering-computing-support))
* [MOOSE](http://mooseframework.com/) - General Purpose PDE Solver
* [OpenMC](https://mit-crpg.github.io/openmc/)  - Monte Carlo Transport focused on neutron criticality problems
* [PARCS](http://www.nrc.gov/about-nrc/regulatory/research/safetycodes.html) - Reactor Kinetics
* [SCALE](http://scale.ornl.gov/) - Safety Analysis and Design
* [SERPENT](http://montecarlo.vtt.fi/) - Monte Carlo Reactor Physics

## Math Tools
* [MATLAB](http://it.engineering.oregonstate.edu/site-license-matlab)
* [MFEM](mfem.org) - finite element library
* [Mathematica and Wolfram Alpha Pro](http://is.oregonstate.edu/service/software/mathematica) -

## Documentation Tools
* [LaTeX](https://www.latex-project.org/)
  - Fantastic software for typing technical documents. A local favorite in regards to editing GUI's is [Texmaker](http://www.xm1math.net/texmaker/).
  - When you are feeling collaborative (or are forced to for course work) and still want to use LaTeX, [ShareLaTeX](https://www.sharelatex.com) and [Overleaf](https://www.overleaf.com/) are great resources. This year, [the two joined forces](https://www.sharelatex.com/blog/2017/07/20/sharelatex-joins-overleaf.html) so eventually they may(?) be one in the same.

    #### LaTeX Examples
    * Basic style file:
      - Here is a [basic style file](./LaTeX_docs/standard.sty) that is used to format a LaTeX file.
      - Doug Woods has been kind enough to supply a [LaTeX Demo](./LaTeX_docs/LatexDemo.zip) for new users to learn tex.
    * MS Thesis and PhD Dissertation
      - You can use his [MS Thesis in LaTeX](./LaTeX_docs/DougsMSThesis.zip) as a template. Execute pdflatex on MS_Thesis.tex to generate the pdf.
      - For the [PhD Dissertation in LaTeX](./LaTeX_docs/Woods2018Dissertation.zip) example, you may need to add "-shell-escape" command in your typesetter. It is set up to generate pdf files for each figure in your document so they do not need to be generated every single typeset (saving a lot of time). To obtain the "TABLE OF CONTENTS (Continued)", "LIST OF FIGURES (Continued)", and "LIST OF TABLES (Continued)" for each subsequent page, you must manually add the commands "\contheading", "\contlotheading", and "\contlofheading" to the Dissertation.toc, Dissertation.lot, and Dissertation.lof files, respectively. You must add them after a line item (in Dissertation.toc/lot/lof) that appears on a page (in the typeset document) that does not have the proper heading. Another trick to know is that subsequent typesetting resets these heading commands so you must add them again for the final typeset.
    * Graphics in LaTeX
      - [Here](./LaTeX_docs/TeXGraphics.zip) are some example graphics that are generated inside the document. This can be a very convenient way to displaying results because it is easy to reformat the graphics without having to regenerate them inside of Matlab.
    * [Beamer](https://www.ctan.org/pkg/beamer?lang=en)
      - A tool to create technical presentations that is based on LaTeX.
      - If you want to get into beamer, feel free to check out this [reference](./references/beameruserguide.pdf) and the [example](./LaTeX_docs/DougsDefense.zip) that Doug Woods has provided.
* [BibDesk](http://bibdesk.sourceforge.net)
  - Bibliography manager. It was developed to be used in sync with LaTeX.
* [Authorea](http://www.authorea.com)
  - A new(er) piece of software that definitely seems interesting!

## Version Control
* [GitHub](http://www.github.com)
  - Your one-stop-shop for version control. Students can obtain a paid, premium account for free through [GitHub's education](https://education.github.com/) program.  
  - The learning curve for using Git effectively can be a little daunting. Thankfully, GitHub has [free training](https://services.github.com/training/). Myself (Tony) and a few others took the GitHub for Developer's training and it is a *game changer*.
* [TravisCI](https://travis-ci.org/)
  - Travis-CI can be utilized by software developers to ensure working code is pushed to your repository before you release a new public version.
  - This tests all of your unit tests and ensures they are passing, and will inform you if your newest pushed code breaks any tests.
* [Coveralls](https://coveralls.io/)
  - Coveralls helps developers ensure their code has adequate test coverage, which provides confidence that their code is adequately tested and stable.
  - This can be integrated with git and Travis-CI to create a seemless transition between local and remote repositories.

* Resources for Git/TravicCI/Coveralls can be found [here](https://softwaredevengresearch.github.io/syllabus/#course-overview), which are a series of lecture notes from ME 599 Software Development of Engineers taught by Dr. Neimeyer.
* Other resources for [Coveralls](https://docs.travis-ci.com/user/coveralls/) and [Travic-CI](https://docs.travis-ci.com/user/tutorial/) can be found in the links.

## Editors
There are *countless* text editors out there. It's really just finding which one works best for you. Here are a few of our (the admins) favorites.
* [Atom](https://atom.io/)
  - Open source. Developed and maintained by GitHub. It really shines if you start using GitHub...
  - Used for local edits.
* [Emacs](https://www.gnu.org/software/emacs/)
  - Can be used for local or remote editing. Native to most command line settings.
  - Really great to use once you learn how to use it. But it does have a fairly steep learning curve.
* [VIM](http://www.vim.org/)
  - A standard command line based editor.

## Visualization Tools
* [VisIt](https://wci.llnl.gov/simulation/computer-codes/visit/)
  - Open source.

## Journal of Open Source Software
The Journal of Open Source Software (JOSS) is an open-source journal for software developers to write a short paper about a piece of code they've written.
JOSS is peer-reviewed, and can be used to increase awarness of code and provide a source for others to cite.
Their website can be found [here](https://joss.theoj.org/).
