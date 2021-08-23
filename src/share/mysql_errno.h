/**
 * Copyright (c) 2021 OceanBase
 * OceanBase CE is licensed under Mulan PubL v2.
 * You can use this software according to the terms and conditions of the Mulan PubL v2.
 * You may obtain a copy of Mulan PubL v2 at:
 *          http://license.coscl.org.cn/MulanPubL-2.0
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PubL v2 for more details.
 */

#ifndef _OBMYSQL_ERRNO_H_
#define _OBMYSQL_ERRNO_H_

#include <mariadb/mysqld_error.h>

#define ER_AES_INVALID_IV 1882
#define ER_OVERSIZE_NEED_RETRY 1887
#define ER_ACCOUNT_HAS_BEEN_LOCKED 3118
#define ER_NON_DEFAULT_VALUE_FOR_GENERATED_COLUMN 3105
#define ER_DEPENDENT_BY_GENERATED_COLUMN 3108

#define ER_TOO_BIG_ENUM 3504
#define ER_TOO_LONG_SET_ENUM_VALUE 3505
#define ER_TOO_MANY_TENANT_PARTITIONS_ERROR 3506

//check constraint mysql8.0.25
#define ER_NON_BOOLEAN_EXPR_FOR_CHECK_CONSTRAINT 3812
#define ER_COLUMN_CHECK_CONSTRAINT_REFERENCES_OTHER_COLUMN 3813
#define ER_CHECK_CONSTRAINT_NAMED_FUNCTION_IS_NOT_ALLOWED 3814
#define ER_CHECK_CONSTRAINT_FUNCTION_IS_NOT_ALLOWED 3815
#define ER_CHECK_CONSTRAINT_VARIABLES 3816
//#define ER_CHECK_CONSTRAINT_ROW_VALUE 3817
#define ER_CHECK_CONSTRAINT_REFERS_AUTO_INCREMENT_COLUMN 3818
#define ER_CHECK_CONSTRAINT_VIOLATED 3819
#define ER_CHECK_CONSTRAINT_REFERS_UNKNOWN_COLUMN 3820
#define ER_CHECK_CONSTRAINT_NOT_FOUND 3821
#define ER_CHECK_CONSTRAINT_DUP_NAME 3822
#define ER_MULTIPLE_CONSTRAINTS_WITH_SAME_NAME 3939
#define ER_CONSTRAINT_NOT_FOUND 3940
#define ER_ALTER_CONSTRAINT_ENFORCEMENT_NOT_SUPPORTED 3941
#define ER_DEPENDENT_BY_CHECK_CONSTRAINT 3959

#endif
