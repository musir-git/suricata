/** Copyright (c) 2009 Open Information Security Foundation.
 *  \author Anoop Saldanha <poonaatsoc@gmail.com>
 */

#include "util-error.h"

#define CASE_CODE(E)  case E: return #E

/**
 * \brief Maps the error code, to its string equivalent
 *
 * \param The error code
 *
 * \retval The string equivalent for the error code
 */
const char * SCErrorToString(SCError err)
{
    switch (err) {
        CASE_CODE (SC_OK);
        CASE_CODE (SC_ERR_MEM_ALLOC);
        CASE_CODE (SC_PCRE_MATCH_FAILED);
        CASE_CODE (SC_PCRE_GET_SUBSTRING_FAILED);
        CASE_CODE (SC_PCRE_COMPILE_FAILED);
        CASE_CODE (SC_PCRE_STUDY_FAILED);
        CASE_CODE (SC_PCRE_PARSE_FAILED);
        CASE_CODE (SC_LOG_MODULE_NOT_INIT);
        CASE_CODE (SC_LOG_FG_FILTER_MATCH_FAILED);
        CASE_CODE (SC_ERR_INVALID_SIGNATURE);
        CASE_CODE (SC_ERR_OPENING_FILE);
        CASE_CODE (SC_ERR_OPENING_RULE_FILE);
        CASE_CODE (SC_ERR_NO_RULES);
        CASE_CODE (SC_ERR_NO_RULES_LOADED);
        CASE_CODE (SC_COUNTER_EXCEEDED);
        CASE_CODE (SC_INVALID_CHECKSUM);
        CASE_CODE (SC_SPRINTF_ERROR);
        CASE_CODE (SC_INVALID_ARGUMENT);
        CASE_CODE (SC_SPINLOCK_ERROR);
        CASE_CODE (SC_INVALID_ENUM_MAP);
        CASE_CODE (SC_INVALID_IP_NETBLOCK);
        CASE_CODE (SC_INVALID_IPV4_ADDR);
        CASE_CODE (SC_INVALID_IPV6_ADDR);
        CASE_CODE (SC_INVALID_RUNMODE);
        CASE_CODE (SC_COMPLETE_PORT_SPACE_NEGATED);
        CASE_CODE (SC_NO_PORTS_LEFT_AFTER_MERGE);
        CASE_CODE (SC_NEGATED_VALUE_IN_PORT_RANGE);
        CASE_CODE (SC_PORT_PARSE_INSERT_STRING_ERR);
        CASE_CODE (SC_UNREACHABLE_CODE_REACHED);
        CASE_CODE (SC_INVALID_NUMERIC_VALUE);
        CASE_CODE (SC_NUMERIC_VALUE_ERANGE);
        CASE_CODE (SC_INVALID_NUM_BYTES);
        CASE_CODE (SC_ERR_ARG_LEN_LONG);
        CASE_CODE (SC_ALPARSER_ERR);
        CASE_CODE (SC_ERR_POOL_EMPTY);
        CASE_CODE (SC_ERR_REASSEMBLY_FAILED);
        CASE_CODE (SC_ERR_POOL_INIT_FAILED);
        CASE_CODE (SC_UNIMPLEMENTED);
        CASE_CODE (SC_ERR_FAST_LOG_GENERIC_ERROR);
        CASE_CODE (SC_ERR_DEBUG_LOG_GENERIC_ERROR);
        CASE_CODE (SC_ERR_UNIFIED_LOG_GENERIC_ERROR);
        CASE_CODE (SC_ERR_HTTP_LOG_GENERIC_ERROR);
        CASE_CODE (SC_ERR_UNIFIED_ALERT_GENERIC_ERROR);
        CASE_CODE (SC_ERR_UNIFIED2_ALERT_GENERIC_ERROR);
        CASE_CODE (SC_ERR_FWRITE);
        CASE_CODE (SC_ERR_FOPEN);
        CASE_CODE (SC_ERR_THRESHOLD_HASH_ADD);
        CASE_CODE (SC_ERR_UNDEFINED_VAR);
        CASE_CODE (SC_RULE_KEYWORD_UNKNOWN);
        CASE_CODE (SC_ERR_FLAGS_MODIFIER);
        CASE_CODE (SC_ERR_DISTANCE_MISSING_CONTENT);
        CASE_CODE (SC_ERR_WITHIN_MISSING_CONTENT);
        CASE_CODE (SC_ERR_NO_URICONTENT_NEGATION);
        default:
            return "UNKNOWN_ERROR";
    }
}
