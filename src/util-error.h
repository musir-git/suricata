/** Copyright (c) 2009 Open Information Security Foundation.
 *  \author Anoop Saldanha <poonaatsoc@gmail.com>
 */

#ifndef __ERROR_H__
#define __ERROR_H__


/* different error types */
typedef enum {
    SC_OK,
    SC_ERR_MEM_ALLOC,
    SC_PCRE_MATCH_FAILED,
    SC_PCRE_GET_SUBSTRING_FAILED,
    SC_PCRE_COMPILE_FAILED,
    SC_PCRE_STUDY_FAILED,
    SC_PCRE_PARSE_FAILED,
    SC_LOG_MODULE_NOT_INIT,
    SC_LOG_FG_FILTER_MATCH_FAILED,
    SC_COUNTER_EXCEEDED,
    SC_INVALID_CHECKSUM,
    SC_SPRINTF_ERROR,
    SC_INVALID_ARGUMENT,
    SC_SPINLOCK_ERROR,
    SC_INVALID_ENUM_MAP,
    SC_INVALID_IP_NETBLOCK,
    SC_INVALID_IPV4_ADDR,
    SC_INVALID_IPV6_ADDR,
    SC_INVALID_RUNMODE,
    SC_ERR_INVALID_SIGNATURE,
    SC_ERR_OPENING_FILE,
    SC_ERR_OPENING_RULE_FILE,
    SC_ERR_NO_RULES,
    SC_ERR_NO_RULES_LOADED,
    SC_ERR_FOPEN,
    SC_INITIALIZATION_ERROR,
    SC_THREAD_SPAWN_FAILED,
    SC_ERR_SYSCALL,
    SC_INVALID_ARGUMENTS,
    SC_ERR_THREAD_CREATE_ERROR,
    SC_ERR_PERF_STATS_NOT_INIT,
    SC_COMPLETE_PORT_SPACE_NEGATED,
    SC_NO_PORTS_LEFT_AFTER_MERGE,
    SC_NEGATED_VALUE_IN_PORT_RANGE,
    SC_PORT_PARSE_INSERT_STRING_ERR,
    SC_UNREACHABLE_CODE_REACHED,
    SC_ALPARSER_ERR,
    SC_INVALID_NUMERIC_VALUE,
    SC_NUMERIC_VALUE_ERANGE,
    SC_INVALID_NUM_BYTES,
    SC_ERR_ARG_LEN_LONG,
    SC_ERR_POOL_EMPTY,
    SC_ERR_REASSEMBLY_FAILED,
    SC_ERR_POOL_INIT_FAILED,
    SC_NFQ_OPEN,
    SC_NFQ_BIND,
    SC_NFQ_UNBIND,
    SC_NFQ_MAXLEN,
    SC_NFQ_CREATE_QUEUE,
    SC_NFQ_SET_MODE,
    SC_NFQ_SETSOCKOPT,
    SC_NFQ_RECV,
    SC_NFQ_HANDLE_PKT,
    SC_NFQ_SET_VERDICT,
    SC_NFQ_THREAD_INIT,
    SC_ERR_DAEMON,
    SC_UNIMPLEMENTED,
    SC_ERR_ADDRESS_ENGINE_GENERIC_ERROR,
    SC_ERR_FAST_LOG_GENERIC_ERROR,
    SC_ERR_DEBUG_LOG_GENERIC_ERROR,
    SC_ERR_UNIFIED_LOG_GENERIC_ERROR,
    SC_ERR_HTTP_LOG_GENERIC_ERROR,
    SC_ERR_UNIFIED_ALERT_GENERIC_ERROR,
    SC_ERR_UNIFIED2_ALERT_GENERIC_ERROR,
    SC_ERR_FWRITE,
    SC_ERR_THRESHOLD_HASH_ADD,
    SC_ERR_UNDEFINED_VAR,
    SC_RULE_KEYWORD_UNKNOWN,
    SC_ERR_FLAGS_MODIFIER,
    SC_ERR_DISTANCE_MISSING_CONTENT,
    SC_ERR_WITHIN_MISSING_CONTENT,
    SC_ERR_NO_URICONTENT_NEGATION,
} SCError;

const char *SCErrorToString(SCError);


#endif /* __ERROR_H__ */
