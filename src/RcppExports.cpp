// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// backward_ll_cpp
NumericMatrix backward_ll_cpp(NumericMatrix Gamma, NumericMatrix p);
RcppExport SEXP _HiddenStateModels_backward_ll_cpp(SEXP GammaSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(backward_ll_cpp(Gamma, p));
    return rcpp_result_gen;
END_RCPP
}
// backward_prob_cpp
NumericMatrix backward_prob_cpp(NumericMatrix Gamma, NumericMatrix p);
RcppExport SEXP _HiddenStateModels_backward_prob_cpp(SEXP GammaSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(backward_prob_cpp(Gamma, p));
    return rcpp_result_gen;
END_RCPP
}
// forward_ll_cpp
NumericMatrix forward_ll_cpp(NumericMatrix Gamma, NumericMatrix p, NumericVector delta);
RcppExport SEXP _HiddenStateModels_forward_ll_cpp(SEXP GammaSEXP, SEXP pSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(forward_ll_cpp(Gamma, p, delta));
    return rcpp_result_gen;
END_RCPP
}
// forward_prob_cpp
NumericMatrix forward_prob_cpp(NumericMatrix Gamma, NumericMatrix p, NumericVector delta);
RcppExport SEXP _HiddenStateModels_forward_prob_cpp(SEXP GammaSEXP, SEXP pSEXP, SEXP deltaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Gamma(GammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type p(pSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta(deltaSEXP);
    rcpp_result_gen = Rcpp::wrap(forward_prob_cpp(Gamma, p, delta));
    return rcpp_result_gen;
END_RCPP
}
// update_log_gamma_cpp
NumericMatrix update_log_gamma_cpp(NumericMatrix log_alpha, NumericMatrix log_beta, NumericMatrix log_gamma, NumericMatrix log_p_mat, double log_ll);
RcppExport SEXP _HiddenStateModels_update_log_gamma_cpp(SEXP log_alphaSEXP, SEXP log_betaSEXP, SEXP log_gammaSEXP, SEXP log_p_matSEXP, SEXP log_llSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type log_alpha(log_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_beta(log_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_gamma(log_gammaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_p_mat(log_p_matSEXP);
    Rcpp::traits::input_parameter< double >::type log_ll(log_llSEXP);
    rcpp_result_gen = Rcpp::wrap(update_log_gamma_cpp(log_alpha, log_beta, log_gamma, log_p_mat, log_ll));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_HiddenStateModels_backward_ll_cpp", (DL_FUNC) &_HiddenStateModels_backward_ll_cpp, 2},
    {"_HiddenStateModels_backward_prob_cpp", (DL_FUNC) &_HiddenStateModels_backward_prob_cpp, 2},
    {"_HiddenStateModels_forward_ll_cpp", (DL_FUNC) &_HiddenStateModels_forward_ll_cpp, 3},
    {"_HiddenStateModels_forward_prob_cpp", (DL_FUNC) &_HiddenStateModels_forward_prob_cpp, 3},
    {"_HiddenStateModels_update_log_gamma_cpp", (DL_FUNC) &_HiddenStateModels_update_log_gamma_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_HiddenStateModels(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
