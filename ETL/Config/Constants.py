import sys, os

#DEFINE COLLECTIONS
CLT_DIVISION   = 'division'
CLT_DEPARTMENT = 'department'
CLT_PRODUCT    = 'product'
CLT_SERVER     = 'server'
CLT_USER       = 'user'

CLT_TECHNICAL_OWNER_GROUP = 'technical_owner_group'

#DEFINE PRODUCT STATUS
CLOSE_STATUS        = 'close'
INUSE_STATUS        = 'in-use'
NEW_STATUS          = 'new'
REMOVE_STATUS       = 'remove'
TRANSFERRING_STATUS = 'transferring'
PRODUCT_STATUS = {NEW_STATUS: 0, INUSE_STATUS: 1, TRANSFERRING_STATUS: 2, REMOVE_STATUS: 3, CLOSE_STATUS: 4}

#DEFINE SEVER STATUS
SERVER_BORROW_STATUS   = 'borrow'
SERVER_UNUSED_STATUS   = 'unused'
SERVER_TRANSFER_STATUS = 'transfer'
SERVER_ERROR_STATUS    = 'error'
SERVER_INUSED_STATUS   = 'in used'
SERVER_STATUS = {SERVER_UNUSED_STATUS: 0, SERVER_INUSED_STATUS: 1, SERVER_BORROW_STATUS: 2, SERVER_TRANSFER_STATUS: 3, SERVER_ERROR_STATUS: 4}

#DEFINE SERVER VM STATUS
SERVER_VM_POWEREDON = 'poweredon'
SERVER_VM_POWEREDOFF = 'poweredoff'
SERVER_VM_POWERESTATUS = {SERVER_VM_POWEREDOFF: 0,SERVER_VM_POWEREDON: 1}

#DEFINE POWER STATUS
POWER_OFF   = 0
POWER_ON    = 1

#DEFINE STATUS
INUSED = 1

#DEFINE SYSTEM PARAMETER
ACTIVE = 1
INACTIVE = 0
UNKNOWN = -1

#DEFINE SERVER TYPE
SERVER_VIRTUAL = 1
SERVER_U       = 2
SERVER_CHASSIS = 3

#DEFINE TYPE LOG
ERROR = 'Error'
WARNING = 'Warning'
INFO = 'Info'

#DEFINE SYS ARGV
GENERAL_MINING = 'general'
PHYSICAL_SERVER_MINING = 'physical_server'
VIRTUAL_SERVER_MINING = 'virtual_server'
USER_MINING = 'user'

#DEFINE CONFIG
CMDB_CONFIG     = 'CMDB_DATABASE'
CMDBv2_CONFIG   = 'CMDBv2_DATABASE'
MDR_CONFIG      = 'MDR_DATABASE'

#DEFINE INTERFACE
PRIVATE = 1
PUBLIC  = 2