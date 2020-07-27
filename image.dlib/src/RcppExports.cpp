// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dlib_fhog
Rcpp::List dlib_fhog(std::vector<int> x, int rows, int cols, const int cell_size, const int filter_rows_padding, const int filter_cols_padding);
RcppExport SEXP _image_dlib_dlib_fhog(SEXP xSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP cell_sizeSEXP, SEXP filter_rows_paddingSEXP, SEXP filter_cols_paddingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< const int >::type cell_size(cell_sizeSEXP);
    Rcpp::traits::input_parameter< const int >::type filter_rows_padding(filter_rows_paddingSEXP);
    Rcpp::traits::input_parameter< const int >::type filter_cols_padding(filter_cols_paddingSEXP);
    rcpp_result_gen = Rcpp::wrap(dlib_fhog(x, rows, cols, cell_size, filter_rows_padding, filter_cols_padding));
    return rcpp_result_gen;
END_RCPP
}
// dlib_surf_points
Rcpp::List dlib_surf_points(std::vector<int> x, int rows, int cols, long max_points, double detection_threshold);
RcppExport SEXP _image_dlib_dlib_surf_points(SEXP xSEXP, SEXP rowsSEXP, SEXP colsSEXP, SEXP max_pointsSEXP, SEXP detection_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<int> >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    Rcpp::traits::input_parameter< long >::type max_points(max_pointsSEXP);
    Rcpp::traits::input_parameter< double >::type detection_threshold(detection_thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(dlib_surf_points(x, rows, cols, max_points, detection_threshold));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_image_dlib_dlib_fhog", (DL_FUNC) &_image_dlib_dlib_fhog, 6},
    {"_image_dlib_dlib_surf_points", (DL_FUNC) &_image_dlib_dlib_surf_points, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_image_dlib(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
