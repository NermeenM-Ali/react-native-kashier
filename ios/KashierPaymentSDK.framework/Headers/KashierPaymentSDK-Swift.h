// Generated by Apple Swift version 5.2.4 (swiftlang-1103.0.32.9 clang-1103.0.32.53)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="KashierPaymentSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class UITextField;
@class UILabel;
@class NSCoder;
@class NSBundle;

SWIFT_CLASS("_TtC17KashierPaymentSDK21AddCardViewController")
@interface AddCardViewController : UIViewController <UITextFieldDelegate>
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified CardNumber;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified CarnName;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified errorHoderName;
- (void)textFieldDidEndEditing:(UITextField * _Nonnull)textField;
- (IBAction)PayButton:(id _Nonnull)sender;
- (void)viewDidLoad;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class ErrorData;

SWIFT_CLASS("_TtC17KashierPaymentSDK4Card")
@interface Card : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull cardHolderName;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardNumber;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardCcv;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardExpiryMonth;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardExpiryYear;
@property (nonatomic, readonly, copy) NSString * _Nonnull cardExpiryDate;
- (nonnull instancetype)initWithCardHolderName:(NSString * _Nonnull)cardHolderName cardNumber:(NSString * _Nonnull)cardNumber cardCcv:(NSString * _Nonnull)cardCcv cardExpiryMonth:(NSString * _Nonnull)cardExpiryMonth cardExpiryYear:(NSString * _Nonnull)cardExpiryYear OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCardHolderName:(NSString * _Nonnull)cardHolderName cardNumber:(NSString * _Nonnull)cardNumber cardCcv:(NSString * _Nonnull)cardCcv cardExpiryDate:(NSString * _Nonnull)cardExpiryDate OBJC_DESIGNATED_INITIALIZER;
+ (ErrorData * _Nonnull)getCardParsingError SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class ValidationResult;

SWIFT_CLASS("_TtC17KashierPaymentSDK20CardValidationResult")
@interface CardValidationResult : NSObject
@property (nonatomic, readonly) BOOL isCardValid;
@property (nonatomic, readonly, copy) NSArray<ValidationResult *> * _Nonnull validationErrors;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, ERROR_TYPE, closed) {
  ERROR_TYPENO_VALUE = 0,
  ERROR_TYPEINITIALIZATION = 1,
  ERROR_TYPEVALIDATION = 2,
  ERROR_TYPEDATA = 3,
  ERROR_TYPEEXCEPTION = 4,
  ERROR_TYPENETWORK_ERROR = 5,
  ERROR_TYPENETWORK_NO_INTERNET = 6,
  ERROR_TYPENETWORK_TIMEOUT = 7,
  ERROR_TYPENETWORK_UNAUTHENTICATED = 8,
  ERROR_TYPENETWORK_CLIENT_ERROR = 9,
  ERROR_TYPENETWORK_SERVER_ERROR = 10,
  ERROR_TYPENETWORK_UNEXPECTED_ERROR = 11,
  ERROR_TYPEJSON_PARSING_ERROR = 12,
};

enum KASHIER_RESPONSE_STATUS : NSInteger;
@class GenericResponse;

SWIFT_CLASS("_TtC17KashierPaymentSDK9ErrorData")
@interface ErrorData : NSObject
@property (nonatomic, readonly) enum ERROR_TYPE errorType;
@property (nonatomic, readonly) enum KASHIER_RESPONSE_STATUS responseStatus;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@property (nonatomic, readonly, copy) NSArray<ValidationResult *> * _Nonnull validationErrors;
@property (nonatomic, readonly, strong) GenericResponse * _Nullable Response;
@property (nonatomic, readonly, copy) NSString * _Nonnull exceptionErrorMessage;
@property (nonatomic, readonly, copy) NSString * _Nonnull networkErrorCode;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (NSString * _Nonnull)getErrorMessage SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nonnull)getValidationErrorsMessage SWIFT_WARN_UNUSED_RESULT;
@end

@class P_Body;
@class P_Response;
@class P_Messages;
@class P_Error;

SWIFT_CLASS("_TtC17KashierPaymentSDK15GenericResponse")
@interface GenericResponse : NSObject
@property (nonatomic, strong) P_Body * _Nullable body;
@property (nonatomic, strong) P_Response * _Nullable responseModel;
@property (nonatomic, strong) P_Messages * _Nullable messages;
@property (nonatomic, strong) P_Error * _Nullable error;
@property (nonatomic, copy) NSString * _Nonnull status;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, KASHIER_DISPLAY_LANG, closed) {
  KASHIER_DISPLAY_LANGAR = 0,
  KASHIER_DISPLAY_LANGEN = 1,
};

typedef SWIFT_ENUM(NSInteger, KASHIER_RESPONSE_STATUS, closed) {
  KASHIER_RESPONSE_STATUSNO_VALUE = 0,
  KASHIER_RESPONSE_STATUSUNKNOWN = 1,
  KASHIER_RESPONSE_STATUSSUCCESS = 2,
  KASHIER_RESPONSE_STATUSFAILURE = 3,
  KASHIER_RESPONSE_STATUSINVALID_REQUEST = 4,
  KASHIER_RESPONSE_STATUSPENDING = 5,
  KASHIER_RESPONSE_STATUSPENDING_ACTION = 6,
};

typedef SWIFT_ENUM(NSInteger, KASHIER_SDK_MODE, closed) {
  KASHIER_SDK_MODEDEVELOPMENT = 0,
  KASHIER_SDK_MODEPRODUCTION = 1,
};

typedef SWIFT_ENUM(NSInteger, KASHIER_TOKEN_VALIDITY, closed) {
  KASHIER_TOKEN_VALIDITYTEMPORARY = 0,
  KASHIER_TOKEN_VALIDITYPERMANENT = 1,
};

@class TokensListCallback;
@class TokenizationCallback;

SWIFT_CLASS("_TtC17KashierPaymentSDK7Kashier")
@interface Kashier : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly) enum KASHIER_SDK_MODE sdkMode;)
+ (enum KASHIER_SDK_MODE)sdkMode SWIFT_WARN_UNUSED_RESULT;
+ (void)initializeObjCWithMerchantId:(NSString * _Nonnull)merchantId apiKey:(NSString * _Nonnull)apiKey sdkMode:(enum KASHIER_SDK_MODE)sdkMode;
+ (void)initializeObjCWithMerchantId:(NSString * _Nonnull)merchantId apiKey:(NSString * _Nonnull)apiKey sdkMode:(enum KASHIER_SDK_MODE)sdkMode currency:(NSString * _Nonnull)currency;
+ (void)initializeObjCWithMerchantId:(NSString * _Nonnull)merchantId apiKey:(NSString * _Nonnull)apiKey sdkMode:(enum KASHIER_SDK_MODE)sdkMode currency:(NSString * _Nonnull)currency displayLang:(enum KASHIER_DISPLAY_LANG)displayLang;
+ (void)listShopperCardsWithShopperReference:(NSString * _Nonnull)shopperReference userCallBack:(TokensListCallback * _Nonnull)userCallBack;
+ (void)saveShopperCardWithCardData:(Card * _Nonnull)cardData shopperReference:(NSString * _Nonnull)shopperReference tokenValidity:(enum KASHIER_TOKEN_VALIDITY)tokenValidity tokenizationCallback:(TokenizationCallback * _Nonnull)tokenizationCallback;
+ (NSString * _Nonnull)getString SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nonnull)getStringWithParamWithStr:(NSString * _Nonnull)myStr SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK18KashierUITextField")
@interface KashierUITextField : UITextField
- (void)addOnLoseFocusEventListener:(UITextField * _Nonnull)textField;
- (void)textFieldDidChange:(UITextField * _Nonnull)textField;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end





@class WKUserContentController;
@class WKScriptMessage;
@class WKWebView;
@class WKNavigationAction;

SWIFT_CLASS("_TtC17KashierPaymentSDK12OtpControler")
@interface OtpControler : UIViewController <WKNavigationDelegate, WKScriptMessageHandler, WKUIDelegate>
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder;
- (void)userContentController:(WKUserContentController * _Nonnull)userContentController didReceiveScriptMessage:(WKScriptMessage * _Nonnull)message;
- (void)viewDidLoad;
- (void)webView:(WKWebView * _Nonnull)webView decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)navigationAction decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK6P_Body")
@interface P_Body : NSObject
@property (nonatomic, strong) P_Messages * _Nullable messages;
@property (nonatomic, copy) NSString * _Nullable status;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK6P_Card")
@interface P_Card : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK7P_Error")
@interface P_Error : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable cause;
@property (nonatomic, readonly, copy) NSString * _Nullable explanation;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK9P_Message")
@interface P_Message : NSObject
@property (nonatomic, readonly, strong) P_Messages * _Nullable messages;
@property (nonatomic, readonly, copy) NSString * _Nullable status;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK10P_Messages")
@interface P_Messages : NSObject
@property (nonatomic, readonly, copy) NSString * _Nullable en;
@property (nonatomic, readonly, copy) NSString * _Nullable ar;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK10P_Response")
@interface P_Response : NSObject
@property (nonatomic, strong) P_Messages * _Nullable messages;
@property (nonatomic, copy) NSString * _Nullable status;
@property (nonatomic, strong) P_Message * _Nullable message;
@property (nonatomic, strong) P_Card * _Nullable cardModel;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC17KashierPaymentSDK12PaddingLabel")
@interface PaddingLabel : UILabel
@property (nonatomic) IBInspectable CGFloat topInset;
@property (nonatomic) IBInspectable CGFloat bottomInset;
@property (nonatomic) IBInspectable CGFloat rightInset;
@property (nonatomic) IBInspectable CGFloat leftInset;
- (void)drawTextInRect:(CGRect)rect;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class PaymentResponse;

SWIFT_CLASS("_TtC17KashierPaymentSDK7Payment")
@interface Payment : GenericResponse
@property (nonatomic, strong) PaymentResponse * _Nullable response;
@end

@class UIButton;
@class UISwitch;

SWIFT_CLASS("_TtC17KashierPaymentSDK25PaymentFormViewController")
@interface PaymentFormViewController : UIViewController
@property (nonatomic, strong) IBOutlet KashierUITextField * _Null_unspecified cardHolderNameTextInput;
@property (nonatomic, strong) IBOutlet KashierUITextField * _Null_unspecified cardNumberTextInput;
@property (nonatomic, strong) IBOutlet KashierUITextField * _Null_unspecified cardExpiryDateTextInput;
@property (nonatomic, strong) IBOutlet KashierUITextField * _Null_unspecified cardCvvTextInput;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified cardHolderNameErrorlbl;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified cardNumberErrorlbl;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified expDateErrorlbl;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified cvvErrorlbl;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified paymentBtn;
@property (nonatomic, weak) IBOutlet UISwitch * _Null_unspecified shouldSaveCardSwitch;
- (IBAction)onExitButtonPress:(UIButton * _Nonnull)sender;
- (void)viewDidLoad;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
- (void)onPaymentButonPressWithSender:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK15PaymentResponse")
@interface PaymentResponse : P_Response
@property (nonatomic, copy) NSString * _Nullable orderReference;
@property (nonatomic, copy) NSString * _Nullable orderID;
@property (nonatomic, copy) NSString * _Nullable transactionID;
@property (nonatomic, copy) NSString * _Nullable merchantOrderID;
@property (nonatomic, copy) NSString * _Nullable creationDate;
@property (nonatomic, copy) NSString * _Nullable providerType;
@property (nonatomic, copy) NSString * _Nullable method;
@property (nonatomic, copy) NSString * _Nullable apiKeyID;
@property (nonatomic, copy) NSString * _Nullable refID;
@property (nonatomic, copy) NSString * _Nullable merchantID;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK14ResponseHelper")
@interface ResponseHelper : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK15TestSwiftInObjC")
@interface TestSwiftInObjC : NSObject
+ (NSString * _Nonnull)getString SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;

SWIFT_CLASS("_TtC17KashierPaymentSDK5Token")
@interface Token : NSObject
@property (nonatomic, copy) NSString * _Nullable cardExpiryYear;
@property (nonatomic, copy) NSString * _Nullable cardExpiryMonth;
@property (nonatomic, copy) NSString * _Nullable cardNumber;
@property (nonatomic, copy) NSString * _Nullable creationDate;
@property (nonatomic, copy) NSString * _Nullable token;
@property (nonatomic, copy) NSString * _Nullable shopperReference;
@property (nonatomic, copy) NSString * _Nullable merchantID;
@property (nonatomic, copy) NSString * _Nullable cardType;
@property (nonatomic, strong) UIImage * _Nullable cardImage;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TokenizationBodyResponse;

SWIFT_CLASS("_TtC17KashierPaymentSDK16TokenizationBody")
@interface TokenizationBody : P_Body
@property (nonatomic, strong) TokenizationBodyResponse * _Nullable response;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK24TokenizationBodyResponse")
@interface TokenizationBodyResponse : NSObject
@property (nonatomic, copy) NSString * _Nullable cardToken;
@property (nonatomic, copy) NSString * _Nullable ccvToken;
@property (nonatomic, copy) NSString * _Nullable cardHolderName;
@property (nonatomic, copy) NSString * _Nullable maskedCard;
@property (nonatomic, copy) NSString * _Nullable expiryMonth;
@property (nonatomic, copy) NSString * _Nullable expiryYear;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class TokenizationResponse;

SWIFT_CLASS("_TtC17KashierPaymentSDK20TokenizationCallback")
@interface TokenizationCallback : NSObject
@property (nonatomic, copy) void (^ _Nonnull onResponse)(TokenizationResponse * _Nonnull);
- (nonnull instancetype)initOnResponse:(void (^ _Nonnull)(TokenizationResponse * _Nonnull))onResponse onFailure:(void (^ _Nonnull)(ErrorData * _Nonnull))onFailure OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) void (^ _Nonnull onFailure)(ErrorData * _Nonnull);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK20TokenizationResponse")
@interface TokenizationResponse : GenericResponse
@property (nonatomic, strong) TokenizationBody * _Nullable tokenizationBody;
@property (nonatomic, strong) TokenizationBodyResponse * _Nullable cardData;
@end

@class TokensResponse;

SWIFT_CLASS("_TtC17KashierPaymentSDK10TokensList")
@interface TokensList : GenericResponse
@property (nonatomic, strong) TokensResponse * _Nullable response;
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK18TokensListCallback")
@interface TokensListCallback : NSObject
@property (nonatomic, copy) void (^ _Nonnull onResponse)(TokensList * _Nonnull);
- (nonnull instancetype)initOnResponse:(void (^ _Nonnull)(TokensList * _Nonnull))onResponse onFailure:(void (^ _Nonnull)(ErrorData * _Nonnull))onFailure OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) void (^ _Nonnull onFailure)(ErrorData * _Nonnull);
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC17KashierPaymentSDK14TokensResponse")
@interface TokensResponse : P_Response
@property (nonatomic, copy) NSArray<Token *> * _Nullable tokens;
@end

typedef SWIFT_ENUM(NSInteger, VALIDATION_ERROR, closed) {
  VALIDATION_ERRORNO_ERROR = 0,
  VALIDATION_ERRORCARD_HOLDER_NAME_REQUIRED = 1,
  VALIDATION_ERRORCARD_HOLDER_NAME_INVALID = 2,
  VALIDATION_ERRORCVV_REQUIRED = 3,
  VALIDATION_ERRORCVV_INVALID = 4,
  VALIDATION_ERROREXPIRY_DATE_REQUIRED = 5,
  VALIDATION_ERROREXPIRY_DATE_INVALID = 6,
  VALIDATION_ERRORCARD_NUMBER_REQUIRED = 7,
  VALIDATION_ERRORCARD_NUMBER_INVALID = 8,
  VALIDATION_ERRORCARD_NOT_SUPPORTED = 9,
  VALIDATION_ERRORSHOPPER_REFERENCE_REQUIRED = 10,
  VALIDATION_ERRORTOKEN_VALIDITY_REQUIRED = 11,
  VALIDATION_ERRORORDER_ID_REQUIRED = 12,
  VALIDATION_ERRORAMOUNT_REQUIRED = 13,
  VALIDATION_ERRORAMOUNT_INVALID = 14,
  VALIDATION_ERRORCARD_TOKEN_REQUIRED = 15,
  VALIDATION_ERRORCVV_TOKEN_REQUIRED = 16,
};

typedef SWIFT_ENUM(NSInteger, VALIDATION_FIELD, closed) {
  VALIDATION_FIELDCARD_HOLDER_NAME = 0,
  VALIDATION_FIELDCARD_NUMBER = 1,
  VALIDATION_FIELDCARD_CVV = 2,
  VALIDATION_FIELDCARD_EXPIRY_DATE = 3,
  VALIDATION_FIELDSHOPPER_REFERENCE = 4,
  VALIDATION_FIELDTOKEN_VALIDITY = 5,
  VALIDATION_FIELDORDER_ID = 6,
  VALIDATION_FIELDAMOUNT = 7,
  VALIDATION_FIELDCARD_TOKEN = 8,
  VALIDATION_FIELDCVV_TOKEN = 9,
};


SWIFT_CLASS("_TtC17KashierPaymentSDK16ValidationResult")
@interface ValidationResult : NSObject
- (nonnull instancetype)initWithValidationField:(enum VALIDATION_FIELD)validationField isValid:(BOOL)isValid errorMessage:(NSString * _Nonnull)errorMessage validationErrorCode:(enum VALIDATION_ERROR)validationErrorCode OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) enum VALIDATION_FIELD validationField;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly, copy) NSString * _Nonnull errorMessage;
@property (nonatomic, readonly) enum VALIDATION_ERROR validationErrorCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
