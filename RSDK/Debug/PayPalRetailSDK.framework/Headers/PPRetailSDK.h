/**
 * PPRetailSDK.h
 *
 * DO NOT EDIT THIS FILE! IT IS AUTOMATICALLY GENERATED AND SHOULD NOT BE CHECKED IN.
 * Generated from: dist/sdk.js
 *
 * 
 */

#import "PayPalRetailSDKTypeDefs.h"
#import "PPRetailObject.h"


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
@class PPRetailCard;
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
 * The PayPal Here SDK object is the main entry point for all SDK operations. Because we provide
 * native-specific versions of the highest level interface, this class is essentially used
 * as a helper for binding top level events (such as a new card reader) to the native partner objects.
 */
@interface PPRetailSDK : PPRetailObject

@property (nonatomic,assign) PPRetailReceiptScreenOrientation receiptScreenOrientation;/**
 * @readonly
 */
@property (nonatomic,strong,nullable,readonly) PPRetailBraintreeManager* braintreeManager;/**
 * @readonly
 */
@property (nonatomic,strong,nullable,readonly) PPRetailSimulationManager* simulationManager;/**
 * @readonly
 */
@property (nonatomic,strong,nullable,readonly) PPRetailTransactionManager* transactionManager;/**
 * @readonly
 */
@property (nonatomic,strong,nullable,readonly) PPRetailMerchantManager* merchantManager;/**
 * @readonly
 */
@property (nonatomic,strong,nullable,readonly) PPRetailDeviceManager* deviceManager;





/**
 * Get the active merchant
 */
-(PPRetailMerchant* _Nullable)getMerchant;

/**
 * Create a transaction context for an invoice
 */
-(PPRetailTransactionContext* _Nullable)createTransaction:(PPRetailInvoice* _Nullable)invoice;

/**
 * Log a message via the Javascript logging framework (called by native to get all the side benefits of JS logging, like CAL)
 */
-(void)logViaJs:(NSString* _Nullable)level component:(NSString* _Nullable)component message:(NSString* _Nullable)message extraData:(NSDictionary* _Nullable)extraData;

/**
 * set the UI theme
 */
-(void)setUITheme:(PPRetailUITheme)theme;

/**
 * get the UI theme
 */
-(PPRetailUITheme)getUITheme;

/**
 * Information that represents the executing platform
 */
-(void)setExecutingEnvironment:(PPRetailSdkEnvironmentInfo* _Nullable)sdkEnvInfo;

/**
 * SDK Version
 */
-(NSString* _Nullable)getSdkVersion;

/**
 * Register a PaymentDevice and notify listeners of the new device.
 */
-(void)discoveredPaymentDevice:(PPRetailPaymentDevice* _Nullable)pd;

/**
 * Perform cleanup before shutting down the host application
 */
-(void)logout;

/**
 * Set the log level for SDK
 */
-(void)setLogLevel:(PPRetaillogLevel)level;

/**
 * Provide an interceptor for all HTTP calls made by the SDK
 */
-(void)setNetworkInterceptor:(PPRetailSDKInterceptHandler _Nullable)interceptor;

/**
 * Provide Fake Response for all HTTP calls made by the SDK
 */
-(void)enableFakeResponse;

/**
 * Provide Fake Response for all HTTP calls made by the SDK
 */
-(void)disableFakeResponse;

/**
 * Provide fake devices. If fake is enable, no actual devices will work.
 */
-(void)simulateDevice:(PPRetailDeviceSimulatorType)devices usecase:(PPRetailSimulatorUseCase)usecase jsonResponseData:(NSString* _Nullable)jsonResponseData;




/**
 * Add a listener for the deviceDiscovered event
 * @returns PPRetailDeviceDiscoveredSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailDeviceDiscoveredSignal _Nullable)addDeviceDiscoveredListener:(PPRetailDeviceDiscoveredEvent _Nullable)listener;

/**
 * Remove a listener for the deviceDiscovered event given the signal object that was returned from addDeviceDiscoveredListener
 */
-(void)removeDeviceDiscoveredListener:(PPRetailDeviceDiscoveredSignal _Nullable)listenerToken;


/**
 * Add a listener for the pageViewed event
 * @returns PPRetailPageViewedSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailPageViewedSignal _Nullable)addPageViewedListener:(PPRetailPageViewedEvent _Nullable)listener;

/**
 * Remove a listener for the pageViewed event given the signal object that was returned from addPageViewedListener
 */
-(void)removePageViewedListener:(PPRetailPageViewedSignal _Nullable)listenerToken;


/**
 * Add a listener for the untrustedNetwork event
 * @returns PPRetailUntrustedNetworkSignal an object that can be used to remove the listener when
 * you're done with it.
 */
-(PPRetailUntrustedNetworkSignal _Nullable)addUntrustedNetworkListener:(PPRetailUntrustedNetworkEvent _Nullable)listener;

/**
 * Remove a listener for the untrustedNetwork event given the signal object that was returned from addUntrustedNetworkListener
 */
-(void)removeUntrustedNetworkListener:(PPRetailUntrustedNetworkSignal _Nullable)listenerToken;


@end
