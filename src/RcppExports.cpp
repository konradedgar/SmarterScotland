// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// is_URL
Rcpp::LogicalVector is_URL(Rcpp::StringVector x, bool narm);
RcppExport SEXP _SmarterScotland_is_URL(SEXP xSEXP, SEXP narmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type narm(narmSEXP);
    rcpp_result_gen = Rcpp::wrap(is_URL(x, narm));
    return rcpp_result_gen;
END_RCPP
}
// read_query_file
Rcpp::String read_query_file(std::string file_path);
RcppExport SEXP _SmarterScotland_read_query_file(SEXP file_pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file_path(file_pathSEXP);
    rcpp_result_gen = Rcpp::wrap(read_query_file(file_path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SmarterScotland_is_URL", (DL_FUNC) &_SmarterScotland_is_URL, 2},
    {"_SmarterScotland_read_query_file", (DL_FUNC) &_SmarterScotland_read_query_file, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SmarterScotland(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
