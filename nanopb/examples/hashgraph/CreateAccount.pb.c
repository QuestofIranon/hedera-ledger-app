/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Wed May  1 15:51:57 2019. */

#include "CreateAccount.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t ShardID_fields[2] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, ShardID, shardNum, shardNum, 0),
    PB_LAST_FIELD
};

const pb_field_t RealmID_fields[3] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, RealmID, shardNum, shardNum, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, RealmID, realmNum, shardNum, 0),
    PB_LAST_FIELD
};

const pb_field_t AccountID_fields[4] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, AccountID, shardNum, shardNum, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, AccountID, realmNum, shardNum, 0),
    PB_FIELD(  3, INT64   , SINGULAR, STATIC  , OTHER, AccountID, accountNum, realmNum, 0),
    PB_LAST_FIELD
};

const pb_field_t FileID_fields[4] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, FileID, shardNum, shardNum, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, FileID, realmNum, shardNum, 0),
    PB_FIELD(  3, INT64   , SINGULAR, STATIC  , OTHER, FileID, fileNum, realmNum, 0),
    PB_LAST_FIELD
};

const pb_field_t ContractID_fields[4] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, ContractID, shardNum, shardNum, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, ContractID, realmNum, shardNum, 0),
    PB_FIELD(  3, INT64   , SINGULAR, STATIC  , OTHER, ContractID, contractNum, realmNum, 0),
    PB_LAST_FIELD
};

const pb_field_t TransactionID_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, TransactionID, transactionValidStart, transactionValidStart, &Timestamp_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, TransactionID, accountID, transactionValidStart, &AccountID_fields),
    PB_LAST_FIELD
};

const pb_field_t Key_fields[7] = {
    PB_ONEOF_FIELD(key,   1, MESSAGE , ONEOF, STATIC  , FIRST, Key, contractID, contractID, &ContractID_fields),
    PB_ONEOF_FIELD(key,   2, BYTES   , ONEOF, STATIC  , UNION, Key, ed25519, ed25519, 0),
    PB_ONEOF_FIELD(key,   3, BYTES   , ONEOF, STATIC  , UNION, Key, RSA_3072, RSA_3072, 0),
    PB_ONEOF_FIELD(key,   4, BYTES   , ONEOF, STATIC  , UNION, Key, ECDSA_384, ECDSA_384, 0),
    PB_ONEOF_FIELD(key,   5, MESSAGE , ONEOF, STATIC  , UNION, Key, thresholdKey, thresholdKey, &ThresholdKey_fields),
    PB_ONEOF_FIELD(key,   6, MESSAGE , ONEOF, STATIC  , UNION, Key, keyList, keyList, &KeyList_fields),
    PB_LAST_FIELD
};

const pb_field_t ThresholdKey_fields[3] = {
    PB_FIELD(  1, UINT32  , SINGULAR, STATIC  , FIRST, ThresholdKey, threshold, threshold, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, ThresholdKey, keys, threshold, &KeyList_fields),
    PB_LAST_FIELD
};

const pb_field_t KeyList_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, KeyList, keys, keys, &Key_fields),
    PB_LAST_FIELD
};

const pb_field_t Signature_fields[7] = {
    PB_ONEOF_FIELD(signature,   1, BYTES   , ONEOF, STATIC  , FIRST, Signature, contract, contract, 0),
    PB_ONEOF_FIELD(signature,   2, BYTES   , ONEOF, STATIC  , UNION, Signature, ed25519, ed25519, 0),
    PB_ONEOF_FIELD(signature,   3, BYTES   , ONEOF, STATIC  , UNION, Signature, RSA_3072, RSA_3072, 0),
    PB_ONEOF_FIELD(signature,   4, BYTES   , ONEOF, STATIC  , UNION, Signature, ECDSA_384, ECDSA_384, 0),
    PB_ONEOF_FIELD(signature,   5, MESSAGE , ONEOF, STATIC  , UNION, Signature, thresholdSignature, thresholdSignature, &ThresholdSignature_fields),
    PB_ONEOF_FIELD(signature,   6, MESSAGE , ONEOF, STATIC  , UNION, Signature, signatureList, signatureList, &SignatureList_fields),
    PB_LAST_FIELD
};

const pb_field_t ThresholdSignature_fields[2] = {
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , FIRST, ThresholdSignature, sigs, sigs, &SignatureList_fields),
    PB_LAST_FIELD
};

const pb_field_t SignatureList_fields[2] = {
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, FIRST, SignatureList, sigs, sigs, &Signature_fields),
    PB_LAST_FIELD
};

const pb_field_t SignaturePair_fields[6] = {
    PB_FIELD(  1, BYTES   , SINGULAR, CALLBACK, FIRST, SignaturePair, pubKeyPrefix, pubKeyPrefix, 0),
    PB_ONEOF_FIELD(signature,   2, BYTES   , ONEOF, STATIC  , OTHER, SignaturePair, contract, pubKeyPrefix, 0),
    PB_ONEOF_FIELD(signature,   3, BYTES   , ONEOF, STATIC  , UNION, SignaturePair, ed25519, pubKeyPrefix, 0),
    PB_ONEOF_FIELD(signature,   4, BYTES   , ONEOF, STATIC  , UNION, SignaturePair, RSA_3072, pubKeyPrefix, 0),
    PB_ONEOF_FIELD(signature,   5, BYTES   , ONEOF, STATIC  , UNION, SignaturePair, ECDSA_384, pubKeyPrefix, 0),
    PB_LAST_FIELD
};

const pb_field_t SignatureMap_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, SignatureMap, sigPair, sigPair, &SignaturePair_fields),
    PB_LAST_FIELD
};

const pb_field_t FeeComponents_fields[12] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, FeeComponents, min, min, 0),
    PB_FIELD(  2, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, max, min, 0),
    PB_FIELD(  3, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, constant, max, 0),
    PB_FIELD(  4, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, bpt, constant, 0),
    PB_FIELD(  5, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, vpt, bpt, 0),
    PB_FIELD(  6, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, rbs, vpt, 0),
    PB_FIELD(  7, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, sbs, rbs, 0),
    PB_FIELD(  8, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, gas, sbs, 0),
    PB_FIELD(  9, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, tv, gas, 0),
    PB_FIELD( 10, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, bpr, tv, 0),
    PB_FIELD( 11, INT64   , SINGULAR, STATIC  , OTHER, FeeComponents, sbpr, bpr, 0),
    PB_LAST_FIELD
};

const pb_field_t TransactionFeeSchedule_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, TransactionFeeSchedule, hederaFunctionality, hederaFunctionality, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, TransactionFeeSchedule, feeData, hederaFunctionality, &FeeData_fields),
    PB_LAST_FIELD
};

const pb_field_t FeeData_fields[4] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, FeeData, nodedata, nodedata, &FeeComponents_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, FeeData, networkdata, nodedata, &FeeComponents_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, FeeData, servicedata, networkdata, &FeeComponents_fields),
    PB_LAST_FIELD
};

const pb_field_t FeeSchedule_fields[3] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, FeeSchedule, transactionFeeSchedule, transactionFeeSchedule, &TransactionFeeSchedule_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, FeeSchedule, expiryTime, transactionFeeSchedule, &TimestampSeconds_fields),
    PB_LAST_FIELD
};

const pb_field_t CurrentAndNextFeeSchedule_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, CurrentAndNextFeeSchedule, currentFeeSchedule, currentFeeSchedule, &FeeSchedule_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, CurrentAndNextFeeSchedule, nextFeeSchedule, currentFeeSchedule, &FeeSchedule_fields),
    PB_LAST_FIELD
};

const pb_field_t NodeAddress_fields[4] = {
    PB_FIELD(  1, BYTES   , SINGULAR, CALLBACK, FIRST, NodeAddress, ipAddress, ipAddress, 0),
    PB_FIELD(  2, INT32   , SINGULAR, STATIC  , OTHER, NodeAddress, portno, ipAddress, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, CALLBACK, OTHER, NodeAddress, memo, portno, 0),
    PB_LAST_FIELD
};

const pb_field_t NodeAddressBook_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, CALLBACK, FIRST, NodeAddressBook, nodeAddress, nodeAddress, &NodeAddress_fields),
    PB_LAST_FIELD
};

const pb_field_t Duration_fields[2] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, Duration, seconds, seconds, 0),
    PB_LAST_FIELD
};

const pb_field_t Timestamp_fields[3] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, Timestamp, seconds, seconds, 0),
    PB_FIELD(  2, INT32   , SINGULAR, STATIC  , OTHER, Timestamp, nanos, seconds, 0),
    PB_LAST_FIELD
};

const pb_field_t TimestampSeconds_fields[2] = {
    PB_FIELD(  1, INT64   , SINGULAR, STATIC  , FIRST, TimestampSeconds, seconds, seconds, 0),
    PB_LAST_FIELD
};

const pb_field_t CryptoCreateTransactionBody_fields[11] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, CryptoCreateTransactionBody, key, key, &Key_fields),
    PB_FIELD(  2, UINT64  , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, initialBalance, key, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, proxyAccountID, initialBalance, &AccountID_fields),
    PB_FIELD(  6, UINT64  , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, sendRecordThreshold, proxyAccountID, 0),
    PB_FIELD(  7, UINT64  , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, receiveRecordThreshold, sendRecordThreshold, 0),
    PB_FIELD(  8, BOOL    , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, receiverSigRequired, receiveRecordThreshold, 0),
    PB_FIELD(  9, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, autoRenewPeriod, receiverSigRequired, &Duration_fields),
    PB_FIELD( 10, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, shardID, autoRenewPeriod, &ShardID_fields),
    PB_FIELD( 11, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, realmID, shardID, &RealmID_fields),
    PB_FIELD( 12, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoCreateTransactionBody, newRealmAdminKey, realmID, &Key_fields),
    PB_LAST_FIELD
};

const pb_field_t CryptoUpdateTransactionBody_fields[13] = {
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , FIRST, CryptoUpdateTransactionBody, accountIDToUpdate, accountIDToUpdate, &AccountID_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoUpdateTransactionBody, key, accountIDToUpdate, &Key_fields),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoUpdateTransactionBody, proxyAccountID, key, &AccountID_fields),
    PB_FIELD(  5, INT32   , SINGULAR, STATIC  , OTHER, CryptoUpdateTransactionBody, proxyFraction, proxyAccountID, 0),
    PB_ONEOF_FIELD(sendRecordThresholdField,   6, UINT64  , ONEOF, STATIC  , OTHER, CryptoUpdateTransactionBody, sendRecordThreshold, proxyFraction, 0),
    PB_ONEOF_FIELD(sendRecordThresholdField,  11, MESSAGE , ONEOF, STATIC  , UNION, CryptoUpdateTransactionBody, sendRecordThresholdWrapper, proxyFraction, &google_protobuf_UInt64Value_fields),
    PB_ONEOF_FIELD(receiveRecordThresholdField,   7, UINT64  , ONEOF, STATIC  , OTHER, CryptoUpdateTransactionBody, receiveRecordThreshold, sendRecordThresholdField.sendRecordThresholdWrapper, 0),
    PB_ONEOF_FIELD(receiveRecordThresholdField,  12, MESSAGE , ONEOF, STATIC  , UNION, CryptoUpdateTransactionBody, receiveRecordThresholdWrapper, sendRecordThresholdField.sendRecordThresholdWrapper, &google_protobuf_UInt64Value_fields),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoUpdateTransactionBody, autoRenewPeriod, receiveRecordThresholdField.receiveRecordThresholdWrapper, &Duration_fields),
    PB_FIELD(  9, MESSAGE , SINGULAR, STATIC  , OTHER, CryptoUpdateTransactionBody, expirationTime, autoRenewPeriod, &Timestamp_fields),
    PB_ONEOF_FIELD(receiverSigRequiredField,  10, BOOL    , ONEOF, STATIC  , OTHER, CryptoUpdateTransactionBody, receiverSigRequired, expirationTime, 0),
    PB_ONEOF_FIELD(receiverSigRequiredField,  13, MESSAGE , ONEOF, STATIC  , UNION, CryptoUpdateTransactionBody, receiverSigRequiredWrapper, expirationTime, &google_protobuf_BoolValue_fields),
    PB_LAST_FIELD
};

const pb_field_t TransactionBody_fields[9] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, TransactionBody, transactionID, transactionID, &TransactionID_fields),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, TransactionBody, nodeAccountID, transactionID, &AccountID_fields),
    PB_FIELD(  3, UINT64  , SINGULAR, STATIC  , OTHER, TransactionBody, transactionFee, nodeAccountID, 0),
    PB_FIELD(  4, MESSAGE , SINGULAR, STATIC  , OTHER, TransactionBody, transactionValidDuration, transactionFee, &Duration_fields),
    PB_FIELD(  5, BOOL    , SINGULAR, STATIC  , OTHER, TransactionBody, generateRecord, transactionValidDuration, 0),
    PB_FIELD(  6, STRING  , SINGULAR, CALLBACK, OTHER, TransactionBody, memo, generateRecord, 0),
    PB_ONEOF_FIELD(data,  11, MESSAGE , ONEOF, STATIC  , OTHER, TransactionBody, cryptoCreateAccount, memo, &CryptoCreateTransactionBody_fields),
    PB_ONEOF_FIELD(data,  15, MESSAGE , ONEOF, STATIC  , UNION, TransactionBody, cryptoUpdateAccount, memo, &CryptoUpdateTransactionBody_fields),
    PB_LAST_FIELD
};

const pb_field_t Transaction_fields[5] = {
    PB_ONEOF_FIELD(bodyData,   1, MESSAGE , ONEOF, STATIC  , FIRST, Transaction, body, body, &TransactionBody_fields),
    PB_ONEOF_FIELD(bodyData,   4, BYTES   , ONEOF, STATIC  , UNION, Transaction, bodyBytes, bodyBytes, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, Transaction, sigs, bodyData.bodyBytes, &SignatureList_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, Transaction, sigMap, sigs, &SignatureMap_fields),
    PB_LAST_FIELD
};



/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(TransactionID, transactionValidStart) < 65536 && pb_membersize(TransactionID, accountID) < 65536 && pb_membersize(Key, key.contractID) < 65536 && pb_membersize(Key, key.thresholdKey) < 65536 && pb_membersize(Key, key.keyList) < 65536 && pb_membersize(ThresholdKey, keys) < 65536 && pb_membersize(Signature, signature.thresholdSignature) < 65536 && pb_membersize(Signature, signature.signatureList) < 65536 && pb_membersize(ThresholdSignature, sigs) < 65536 && pb_membersize(TransactionFeeSchedule, feeData) < 65536 && pb_membersize(FeeData, nodedata) < 65536 && pb_membersize(FeeData, networkdata) < 65536 && pb_membersize(FeeData, servicedata) < 65536 && pb_membersize(FeeSchedule, expiryTime) < 65536 && pb_membersize(CurrentAndNextFeeSchedule, currentFeeSchedule) < 65536 && pb_membersize(CurrentAndNextFeeSchedule, nextFeeSchedule) < 65536 && pb_membersize(CryptoCreateTransactionBody, key) < 65536 && pb_membersize(CryptoCreateTransactionBody, proxyAccountID) < 65536 && pb_membersize(CryptoCreateTransactionBody, autoRenewPeriod) < 65536 && pb_membersize(CryptoCreateTransactionBody, shardID) < 65536 && pb_membersize(CryptoCreateTransactionBody, realmID) < 65536 && pb_membersize(CryptoCreateTransactionBody, newRealmAdminKey) < 65536 && pb_membersize(CryptoUpdateTransactionBody, sendRecordThresholdField.sendRecordThresholdWrapper) < 65536 && pb_membersize(CryptoUpdateTransactionBody, receiveRecordThresholdField.receiveRecordThresholdWrapper) < 65536 && pb_membersize(CryptoUpdateTransactionBody, receiverSigRequiredField.receiverSigRequiredWrapper) < 65536 && pb_membersize(CryptoUpdateTransactionBody, accountIDToUpdate) < 65536 && pb_membersize(CryptoUpdateTransactionBody, key) < 65536 && pb_membersize(CryptoUpdateTransactionBody, proxyAccountID) < 65536 && pb_membersize(CryptoUpdateTransactionBody, autoRenewPeriod) < 65536 && pb_membersize(CryptoUpdateTransactionBody, expirationTime) < 65536 && pb_membersize(TransactionBody, data.cryptoCreateAccount) < 65536 && pb_membersize(TransactionBody, data.cryptoUpdateAccount) < 65536 && pb_membersize(TransactionBody, transactionID) < 65536 && pb_membersize(TransactionBody, nodeAccountID) < 65536 && pb_membersize(TransactionBody, transactionValidDuration) < 65536 && pb_membersize(Transaction, bodyData.body) < 65536 && pb_membersize(Transaction, bodyBytes) < 65536 && pb_membersize(Transaction, sigs) < 65536 && pb_membersize(Transaction, sigMap) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_ShardID_RealmID_AccountID_FileID_ContractID_TransactionID_Key_ThresholdKey_KeyList_Signature_ThresholdSignature_SignatureList_SignaturePair_SignatureMap_FeeComponents_TransactionFeeSchedule_FeeData_FeeSchedule_CurrentAndNextFeeSchedule_NodeAddress_NodeAddressBook_Duration_Timestamp_TimestampSeconds_CryptoCreateTransactionBody_CryptoUpdateTransactionBody_TransactionBody_Transaction)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for Transaction.bodyBytes is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */
