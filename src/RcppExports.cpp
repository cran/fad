// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ERF
NumericVector ERF(int P, NumericVector Mu, NumericVector Sigma);
RcppExport SEXP _fad_ERF(SEXP PSEXP, SEXP MuSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(ERF(P, Mu, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// logIv
NumericVector logIv(int P, NumericVector Mu, NumericVector Sigma);
RcppExport SEXP _fad_logIv(SEXP PSEXP, SEXP MuSEXP, SEXP SigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Sigma(SigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(logIv(P, Mu, Sigma));
    return rcpp_result_gen;
END_RCPP
}
// eigs_sym_RXmD
RcppExport SEXP eigs_sym_RXmD(SEXP Xmat, NumericVector mu, NumericVector D, NumericVector er, NumericVector vr, NumericVector ybar, int nev, int matclass);
RcppExport SEXP _fad_eigs_sym_RXmD(SEXP XmatSEXP, SEXP muSEXP, SEXP DSEXP, SEXP erSEXP, SEXP vrSEXP, SEXP ybarSEXP, SEXP nevSEXP, SEXP matclassSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type Xmat(XmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type er(erSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vr(vrSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ybar(ybarSEXP);
    Rcpp::traits::input_parameter< int >::type nev(nevSEXP);
    Rcpp::traits::input_parameter< int >::type matclass(matclassSEXP);
    rcpp_result_gen = Rcpp::wrap(eigs_sym_RXmD(Xmat, mu, D, er, vr, ybar, nev, matclass));
    return rcpp_result_gen;
END_RCPP
}
// sph
void sph(SEXP X);
RcppExport SEXP _fad_sph(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type X(XSEXP);
    sph(X);
    return R_NilValue;
END_RCPP
}
// postmdiag
NumericMatrix postmdiag(NumericMatrix X, NumericVector d);
RcppExport SEXP _fad_postmdiag(SEXP XSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(postmdiag(X, d));
    return rcpp_result_gen;
END_RCPP
}
// colSumSqdgC
NumericVector colSumSqdgC(S4 X, NumericVector D, NumericVector mu);
RcppExport SEXP _fad_colSumSqdgC(SEXP XSEXP, SEXP DSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumSqdgC(X, D, mu));
    return rcpp_result_gen;
END_RCPP
}
// colSumSq
NumericVector colSumSq(NumericMatrix X, NumericVector D, NumericVector mu);
RcppExport SEXP _fad_colSumSq(SEXP XSEXP, SEXP DSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(colSumSq(X, D, mu));
    return rcpp_result_gen;
END_RCPP
}
// RXM_CC
NumericVector RXM_CC(NumericMatrix X, NumericVector ER);
RcppExport SEXP _fad_RXM_CC(SEXP XSEXP, SEXP ERSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ER(ERSEXP);
    rcpp_result_gen = Rcpp::wrap(RXM_CC(X, ER));
    return rcpp_result_gen;
END_RCPP
}
// cmdg_CC
NumericVector cmdg_CC(NumericMatrix L, NumericVector D);
RcppExport SEXP _fad_cmdg_CC(SEXP LSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(cmdg_CC(L, D));
    return rcpp_result_gen;
END_RCPP
}
// taom_CC
List taom_CC(NumericMatrix X, NumericMatrix L, NumericVector D, NumericVector mu, NumericVector cmatdg);
RcppExport SEXP _fad_taom_CC(SEXP XSEXP, SEXP LSEXP, SEXP DSEXP, SEXP muSEXP, SEXP cmatdgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cmatdg(cmatdgSEXP);
    rcpp_result_gen = Rcpp::wrap(taom_CC(X, L, D, mu, cmatdg));
    return rcpp_result_gen;
END_RCPP
}
// ism_CC
NumericVector ism_CC(NumericMatrix X, NumericMatrix L, NumericVector D, NumericVector mu, NumericVector cmatdg);
RcppExport SEXP _fad_ism_CC(SEXP XSEXP, SEXP LSEXP, SEXP DSEXP, SEXP muSEXP, SEXP cmatdgSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type L(LSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cmatdg(cmatdgSEXP);
    rcpp_result_gen = Rcpp::wrap(ism_CC(X, L, D, mu, cmatdg));
    return rcpp_result_gen;
END_RCPP
}
// mSD_CC
NumericVector mSD_CC(NumericMatrix X, NumericVector mu, NumericVector D, NumericVector ER, NumericVector VR, NumericVector ybar);
RcppExport SEXP _fad_mSD_CC(SEXP XSEXP, SEXP muSEXP, SEXP DSEXP, SEXP ERSEXP, SEXP VRSEXP, SEXP ybarSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type D(DSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ER(ERSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type VR(VRSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ybar(ybarSEXP);
    rcpp_result_gen = Rcpp::wrap(mSD_CC(X, mu, D, ER, VR, ybar));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fad_ERF", (DL_FUNC) &_fad_ERF, 3},
    {"_fad_logIv", (DL_FUNC) &_fad_logIv, 3},
    {"_fad_eigs_sym_RXmD", (DL_FUNC) &_fad_eigs_sym_RXmD, 8},
    {"_fad_sph", (DL_FUNC) &_fad_sph, 1},
    {"_fad_postmdiag", (DL_FUNC) &_fad_postmdiag, 2},
    {"_fad_colSumSqdgC", (DL_FUNC) &_fad_colSumSqdgC, 3},
    {"_fad_colSumSq", (DL_FUNC) &_fad_colSumSq, 3},
    {"_fad_RXM_CC", (DL_FUNC) &_fad_RXM_CC, 2},
    {"_fad_cmdg_CC", (DL_FUNC) &_fad_cmdg_CC, 2},
    {"_fad_taom_CC", (DL_FUNC) &_fad_taom_CC, 5},
    {"_fad_ism_CC", (DL_FUNC) &_fad_ism_CC, 5},
    {"_fad_mSD_CC", (DL_FUNC) &_fad_mSD_CC, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fad(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
