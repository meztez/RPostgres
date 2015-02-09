// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "rpq_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// connect
XPtr<PqConnectionPtr> connect(std::vector<std::string> keys, std::vector<std::string> values);
RcppExport SEXP rpq_connect(SEXP keysSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type values(valuesSEXP);
    __result = Rcpp::wrap(connect(keys, values));
    return __result;
END_RCPP
}
// con_info
List con_info(XPtr<PqConnectionPtr> con);
RcppExport SEXP rpq_con_info(SEXP conSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqConnectionPtr> >::type con(conSEXP);
    __result = Rcpp::wrap(con_info(con));
    return __result;
END_RCPP
}
// postgres_disconnect
void postgres_disconnect(XPtr<PqConnectionPtr> con);
RcppExport SEXP rpq_postgres_disconnect(SEXP conSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqConnectionPtr> >::type con(conSEXP);
    postgres_disconnect(con);
    return R_NilValue;
END_RCPP
}
// escape_string
CharacterVector escape_string(XPtr<PqConnectionPtr> con, CharacterVector xs);
RcppExport SEXP rpq_escape_string(SEXP conSEXP, SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqConnectionPtr> >::type con(conSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type xs(xsSEXP);
    __result = Rcpp::wrap(escape_string(con, xs));
    return __result;
END_RCPP
}
// escape_identifier
CharacterVector escape_identifier(XPtr<PqConnectionPtr> con, CharacterVector xs);
RcppExport SEXP rpq_escape_identifier(SEXP conSEXP, SEXP xsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqConnectionPtr> >::type con(conSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type xs(xsSEXP);
    __result = Rcpp::wrap(escape_identifier(con, xs));
    return __result;
END_RCPP
}
// encrypt_password
String encrypt_password(String password, String user);
RcppExport SEXP rpq_encrypt_password(SEXP passwordSEXP, SEXP userSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< String >::type password(passwordSEXP);
    Rcpp::traits::input_parameter< String >::type user(userSEXP);
    __result = Rcpp::wrap(encrypt_password(password, user));
    return __result;
END_RCPP
}
// rpostgres_send_query
XPtr<PqResult> rpostgres_send_query(XPtr<PqConnectionPtr> con, std::string sql);
RcppExport SEXP rpq_rpostgres_send_query(SEXP conSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqConnectionPtr> >::type con(conSEXP);
    Rcpp::traits::input_parameter< std::string >::type sql(sqlSEXP);
    __result = Rcpp::wrap(rpostgres_send_query(con, sql));
    return __result;
END_RCPP
}
// fetch
List fetch(XPtr<PqResult> rs);
RcppExport SEXP rpq_fetch(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqResult> >::type rs(rsSEXP);
    __result = Rcpp::wrap(fetch(rs));
    return __result;
END_RCPP
}
// rows_affected
int rows_affected(XPtr<PqResult> rs);
RcppExport SEXP rpq_rows_affected(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqResult> >::type rs(rsSEXP);
    __result = Rcpp::wrap(rows_affected(rs));
    return __result;
END_RCPP
}
// is_complete
bool is_complete(XPtr<PqResult> rs);
RcppExport SEXP rpq_is_complete(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqResult> >::type rs(rsSEXP);
    __result = Rcpp::wrap(is_complete(rs));
    return __result;
END_RCPP
}
// clear_result
void clear_result(XPtr<PqResult> rs);
RcppExport SEXP rpq_clear_result(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqResult> >::type rs(rsSEXP);
    clear_result(rs);
    return R_NilValue;
END_RCPP
}
// postgres_result_valid
bool postgres_result_valid(XPtr<PqResult> rs);
RcppExport SEXP rpq_postgres_result_valid(SEXP rsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< XPtr<PqResult> >::type rs(rsSEXP);
    __result = Rcpp::wrap(postgres_result_valid(rs));
    return __result;
END_RCPP
}
