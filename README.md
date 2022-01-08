# Hidden State Models

Some description

## Installation

You can install the latest version of this package using the `install_github` function from the `devtools` package.
Specifically, in `R` run:

```
install.packages('devtools')
devtools::install_github('asbjornholk/HiddenStateModels') 
```

## Usage

Documentation as well as worked examples are available for all functions included in the package.
They are accessible through standard `R` documentation, as well as a more theoretically thorough vignette and wiki.

## Planned future updates

### Major updates:

- Adding automated testing
- Adding support for hidden semi-Markov models
- Adding support for continuous time hidden (semi-)Markov models
- Adding support for covariates and state-dependent linear models

### Minor updates:

- Reworking plotting to make it prettier and more informative
- (Adding support for `ggplot2`?)
- Adding support for stationary hidden (semi-)Markov models
- Adding more standard distribution families

## License

This project uses the [MIT](https://choosealicense.com/licenses/mit/) license (see `LICENSE.md` for details)

## Acknowledgment

This package is a [fork of a project](https://github.com/AdvancedR-2021/hmm) made for a university class, developed in collaboration with [Malte Nikolajsen](https://github.com/maltenikolajsen) and [Leander Tilsted Kristensen](https://github.com/LeanderTilsted)

Much of the theory is based on the excellent book *Hidden Markov Models for Time Series - An Introduction Using R, Second Edition* by Langrock et. al.
