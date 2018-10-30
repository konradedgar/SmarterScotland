README
================

***The package is in an early development stage and was posted to
facilitate collaboration.***

[![Build
Status](https://travis-ci.org/konradedgar/SmarterScotland.svg?branch=master)](https://travis-ci.org/konradedgar/SmarterScotland)
[![codecov](https://codecov.io/gh/konradedgar/SmarterScotland/branch/master/graph/badge.svg)](https://codecov.io/gh/konradedgar/SmarterScotland)

## Overview

The SmarterScotland package provides a convenient interface for sourcing
and interrogeting data available through the
[statistics.gov.scot](http://statistics.gov.scot).

## Installation

``` r
if ("devtools" %in% rownames(installed.packages())) {
  devtools::install_github(repo = "konradedgar/SmarterScotland", build_vignettes = TRUE)
} else {
  install.packages("devtools")
  devtools::install_github(repo ="konradedgar/SmarterScotland", build_vignettes = TRUE)
}
```
