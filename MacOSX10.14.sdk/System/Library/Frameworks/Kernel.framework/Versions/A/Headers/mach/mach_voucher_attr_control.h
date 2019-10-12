#ifndef	_mach_voucher_attr_control_user_
#define	_mach_voucher_attr_control_user_

/* Module mach_voucher_attr_control */

#include <string.h>
#include <mach/ndr.h>
#include <mach/boolean.h>
#include <mach/kern_return.h>
#include <mach/notify.h>
#include <mach/mach_types.h>
#include <mach/message.h>
#include <mach/mig_errors.h>
#include <mach/port.h>
	
/* BEGIN MIG_STRNCPY_ZEROFILL CODE */

#if defined(__has_include)
#if __has_include(<mach/mig_strncpy_zerofill_support.h>)
#ifndef USING_MIG_STRNCPY_ZEROFILL
#define USING_MIG_STRNCPY_ZEROFILL
#endif
#ifndef __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#define __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__
#ifdef __cplusplus
extern "C" {
#endif
	extern int mig_strncpy_zerofill(char *dest, const char *src, int len) __attribute__((weak_import));
#ifdef __cplusplus
}
#endif
#endif /* __MIG_STRNCPY_ZEROFILL_FORWARD_TYPE_DECLS__ */
#endif /* __has_include(<mach/mig_strncpy_zerofill_support.h>) */
#endif /* __has_include */
	
/* END MIG_STRNCPY_ZEROFILL CODE */


#ifdef AUTOTEST
#ifndef FUNCTION_PTR_T
#define FUNCTION_PTR_T
typedef void (*function_ptr_t)(mach_port_t, char *, mach_msg_type_number_t);
typedef struct {
        char            *name;
        function_ptr_t  function;
} function_table_entry;
typedef function_table_entry   *function_table_t;
#endif /* FUNCTION_PTR_T */
#endif /* AUTOTEST */

#ifndef	mach_voucher_attr_control_MSG_COUNT
#define	mach_voucher_attr_control_MSG_COUNT	2
#endif	/* mach_voucher_attr_control_MSG_COUNT */

#include <mach/std_types.h>
#include <mach/mig.h>
#include <mach/mig.h>
#include <mach/mach_types.h>

#ifdef __BeforeMigUserHeader
__BeforeMigUserHeader
#endif /* __BeforeMigUserHeader */

#include <sys/cdefs.h>
__BEGIN_DECLS


/* Routine mach_voucher_attr_control_get_values */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t mach_voucher_attr_control_get_values
(
	ipc_voucher_attr_control_t control,
	ipc_voucher_t voucher,
	mach_voucher_attr_value_handle_array_t value_handles,
	mach_msg_type_number_t *value_handlesCnt
);

/* Routine mach_voucher_attr_control_create_mach_voucher */
#ifdef	mig_external
mig_external
#else
extern
#endif	/* mig_external */
kern_return_t mach_voucher_attr_control_create_mach_voucher
(
	ipc_voucher_attr_control_t control,
	mach_voucher_attr_raw_recipe_array_t recipes,
	mach_msg_type_number_t recipesCnt,
	ipc_voucher_t *voucher
);

__END_DECLS

/********************** Caution **************************/
/* The following data types should be used to calculate  */
/* maximum message sizes only. The actual message may be */
/* smaller, and the position of the arguments within the */
/* message layout may vary from what is presented here.  */
/* For example, if any of the arguments are variable-    */
/* sized, and less than the maximum is sent, the data    */
/* will be packed tight in the actual message to reduce  */
/* the presence of holes.                                */
/********************** Caution **************************/

/* typedefs for all requests */

#ifndef __Request__mach_voucher_attr_control_subsystem__defined
#define __Request__mach_voucher_attr_control_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t voucher;
		/* end of the kernel processed data */
		NDR_record_t NDR;
		mach_msg_type_number_t value_handlesCnt;
	} __Request__mach_voucher_attr_control_get_values_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_msg_type_number_t recipesCnt;
		uint8_t recipes[5120];
	} __Request__mach_voucher_attr_control_create_mach_voucher_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Request__mach_voucher_attr_control_subsystem__defined */

/* union of all requests */

#ifndef __RequestUnion__mach_voucher_attr_control_subsystem__defined
#define __RequestUnion__mach_voucher_attr_control_subsystem__defined
union __RequestUnion__mach_voucher_attr_control_subsystem {
	__Request__mach_voucher_attr_control_get_values_t Request_mach_voucher_attr_control_get_values;
	__Request__mach_voucher_attr_control_create_mach_voucher_t Request_mach_voucher_attr_control_create_mach_voucher;
};
#endif /* !__RequestUnion__mach_voucher_attr_control_subsystem__defined */
/* typedefs for all replies */

#ifndef __Reply__mach_voucher_attr_control_subsystem__defined
#define __Reply__mach_voucher_attr_control_subsystem__defined

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		kern_return_t RetCode;
		mach_msg_type_number_t value_handlesCnt;
		mach_voucher_attr_value_handle_t value_handles[4];
	} __Reply__mach_voucher_attr_control_get_values_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif

#ifdef  __MigPackStructs
#pragma pack(4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		/* start of the kernel processed data */
		mach_msg_body_t msgh_body;
		mach_msg_port_descriptor_t voucher;
		/* end of the kernel processed data */
	} __Reply__mach_voucher_attr_control_create_mach_voucher_t __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack()
#endif
#endif /* !__Reply__mach_voucher_attr_control_subsystem__defined */

/* union of all replies */

#ifndef __ReplyUnion__mach_voucher_attr_control_subsystem__defined
#define __ReplyUnion__mach_voucher_attr_control_subsystem__defined
union __ReplyUnion__mach_voucher_attr_control_subsystem {
	__Reply__mach_voucher_attr_control_get_values_t Reply_mach_voucher_attr_control_get_values;
	__Reply__mach_voucher_attr_control_create_mach_voucher_t Reply_mach_voucher_attr_control_create_mach_voucher;
};
#endif /* !__RequestUnion__mach_voucher_attr_control_subsystem__defined */

#ifndef subsystem_to_name_map_mach_voucher_attr_control
#define subsystem_to_name_map_mach_voucher_attr_control \
    { "mach_voucher_attr_control_get_values", 5600 },\
    { "mach_voucher_attr_control_create_mach_voucher", 5601 }
#endif

#ifdef __AfterMigUserHeader
__AfterMigUserHeader
#endif /* __AfterMigUserHeader */

#endif	 /* _mach_voucher_attr_control_user_ */
