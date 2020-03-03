/**
 * PPRetailManuallyEnteredCard.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: node_modules/retail-payment-device/src/ManuallyEnteredCard.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"
#import "PPRetailCard.h"

@class PPRetailSDK;
@class PPRetailError;
@class PPRetailPayPalErrorInfo;
@class PPRetailAccountSummary;
@class PPRetailAccountSummarySection;
@class PPRetailInvoiceAddress;
@class PPRetailInvoiceAttachment;
@class PPRetailInvoiceBillingInfo;
@class PPRetailInvoiceCCInfo;
@class PPRetailCountries;
@class PPRetailCountry;
@class PPRetailInvoiceCustomAmount;
@class PPRetailInvoice;
@class PPRetailInvoiceActions;
@class PPRetailInvoiceConstants;
@class PPRetailInvoiceListRequest;
@class PPRetailInvoiceListResponse;
@class PPRetailInvoiceMetaData;
@class PPRetailInvoiceTemplatesResponse;
@class PPRetailInvoicingService;
@class PPRetailInvoiceItem;
@class PPRetailInvoiceMerchantInfo;
@class PPRetailInvoiceNotification;
@class PPRetailInvoicePayment;
@class PPRetailInvoicePaymentTerm;
@class PPRetailInvoiceRefund;
@class PPRetailInvoiceSearchRequest;
@class PPRetailInvoiceShippingInfo;
@class PPRetailInvoiceTemplate;
@class PPRetailInvoiceTemplateSettings;
@class PPRetailMerchant;
@class PPRetailNetworkRequest;
@class PPRetailNetworkResponse;
@class PPRetailSdkEnvironmentInfo;
@class PPRetailRetailInvoice;
@class PPRetailRetailInvoicePayment;
@class PPRetailBraintreeManager;
@class PPRetailSimulationManager;
@class PPRetailMerchantManager;
@class PPRetailCaptureHandler;
@class PPRetailTransactionContext;
@class PPRetailTransactionManager;
@class PPRetailTransactionBeginOptions;
@class PPRetailReceiptDestination;
@class PPRetailDeviceManager;
@class PPRetailSignatureReceiver;
@class PPRetailReceiptOptionsViewContent;
@class PPRetailReceiptEmailEntryViewContent;
@class PPRetailReceiptSMSEntryViewContent;
@class PPRetailReceiptViewContent;
@class PPRetailOfflinePaymentStatus;
@class PPRetailOfflinePaymentInfo;
@class PPRetailOfflineTransactionRecord;
@class PPRetailTokenExpirationHandler;

@class PPRetailBatteryInfo;
@class PPRetailMagneticCard;
@class PPRetailPaymentDevice;
@class PPRetailManuallyEnteredCard;
@class PPRetailDeviceUpdate;
@class PPRetailCardInsertedHandler;
@class PPRetailDeviceStatus;
@class PPRetailPayer;
@class PPRetailTransactionRecord;
@class PPRetailVaultRecord;
@class PPRetailAuthorizedTransaction;
@class PPRetailPage;
@class PPRetailDiscoveredCardReader;
@class PPRetailCardReaderScanAndDiscoverOptions;
@class PPRetailDeviceConnectorOptions;
@class PPRetailSimulationOptions;

/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
/**
 * Certain regions support manual entry of credit card numbers. The retail SDK requires
 * that you use an EMV certified terminal to gather an encrypted PAN and when doing so,
 * an object of type ManuallyEnteredCard would be returned, which can be presented to
 * the backend services to collect payment
 */
@interface PPRetailManuallyEnteredCard : PPRetailCard


- (instancetype _Nullable)init;
    




/**
 * cardNumber Number of the provided card
 */
-(void)setCardNumber:(NSString* _Nullable)value;

/**
 * cardNumber Number of the provided card
 */
-(NSString* _Nullable)getCardNumber;

/**
 * The CVV on the card for payment. E.g. 131
 */
-(void)setCVV:(NSString* _Nullable)value;

/**
 * The CVV on the card for payment. E.g. 131
 */
-(NSString* _Nullable)getCVV;

/**
 * Primary account holder's billing postal code
 */
-(void)setPostalCode:(NSString* _Nullable)value;

/**
 * Primary account holder's billing postal code
 */
-(NSString* _Nullable)getPostalCode;

/**
 * Set the card expiration date in (MMYYYY) format. E.g. 092019 for Sep, 2019
 */
-(void)setExpiration:(NSString* _Nullable)date;

/**
 * Get the card expiration date in MMYYYY format
 */
-(NSString* _Nullable)getExpiration;




@end
