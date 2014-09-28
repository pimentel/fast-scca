// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nipals
Rcpp::List nipals(Rcpp::NumericMatrix X, Rcpp::NumericMatrix Y);
RcppExport SEXP fscca_nipals(SEXP XSEXP, SEXP YSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Y(YSEXP );
        Rcpp::List __result = nipals(X, Y);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sparse_nipals
Rcpp::List sparse_nipals(Rcpp::NumericMatrix X, Rcpp::NumericMatrix Y, std::string penalty_x, std::string penalty_y, double lamx, double lamy);
RcppExport SEXP fscca_sparse_nipals(SEXP XSEXP, SEXP YSEXP, SEXP penalty_xSEXP, SEXP penalty_ySEXP, SEXP lamxSEXP, SEXP lamySEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Y(YSEXP );
        Rcpp::traits::input_parameter< std::string >::type penalty_x(penalty_xSEXP );
        Rcpp::traits::input_parameter< std::string >::type penalty_y(penalty_ySEXP );
        Rcpp::traits::input_parameter< double >::type lamx(lamxSEXP );
        Rcpp::traits::input_parameter< double >::type lamy(lamySEXP );
        Rcpp::List __result = sparse_nipals(X, Y, penalty_x, penalty_y, lamx, lamy);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_submatrix
arma::mat get_submatrix(const arma::mat &X_, const arma::uvec &which_rows);
RcppExport SEXP fscca_get_submatrix(SEXP &X_SEXP, SEXP &which_rowsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< const arma::mat >::type &X_(&X_SEXP );
        Rcpp::traits::input_parameter< const arma::uvec >::type &which_rows(&which_rowsSEXP );
        arma::mat __result = get_submatrix(&X_, &which_rows);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
