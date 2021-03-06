// Generated by Apple Swift version 1.2 (swiftlang-602.0.53.1 clang-602.0.53)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if defined(__has_include) && __has_include(<uchar.h>)
# include <uchar.h>
#elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
#endif

typedef struct _NSZone NSZone;

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted) 
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
#endif
#if __has_feature(nullability)
#  define SWIFT_NULLABILITY(X) X
#else
# if !defined(__nonnull)
#  define __nonnull
# endif
# if !defined(__nullable)
#  define __nullable
# endif
# if !defined(__null_unspecified)
#  define __null_unspecified
# endif
#  define SWIFT_NULLABILITY(X)
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import UIKit;
@import CoreGraphics;
@import CoreLocation;
@import CoreBluetooth;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

SWIFT_CLASS("_TtC12IndoorpinSdk7IPFloor")
@interface IPFloor : NSObject
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIScrollView;
@class UIView;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC12IndoorpinSdk25IPFloorPlanViewController")
@interface IPFloorPlanViewController : UIViewController <UIScrollViewDelegate>
- (void)viewDidLoad;
- (UIView * __nullable)viewForZoomingInScrollView:(UIScrollView * __nonnull)scrollView;
- (void)didReceiveMemoryWarning;
- (void)scrollViewDidEndZooming:(UIScrollView * __nonnull)scrollView withView:(UIView * __null_unspecified)view atScale:(CGFloat)scale;
- (void)scrollViewDidZoom:(UIScrollView * __nonnull)scrollView;
- (void)scrollViewDidScroll:(UIScrollView * __nonnull)scrollView;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithNibName:(NSString * __nullable)nibNameOrNil bundle:(NSBundle * __nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (SWIFT_NULLABILITY(nonnull) instancetype)initWithCoder:(NSCoder * __nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class CBPeripheralManager;
@class CLLocationManager;
@class CLRegion;
@class CLBeaconRegion;

SWIFT_CLASS("_TtC12IndoorpinSdk18IPLocationListener")
@interface IPLocationListener : NSObject <CLLocationManagerDelegate, CBPeripheralManagerDelegate>
+ (IPLocationListener * __nonnull)sharedInstance;
- (void)peripheralManagerDidUpdateState:(CBPeripheralManager * __null_unspecified)peripheral;
- (void)locationManager:(CLLocationManager * __null_unspecified)manager didEnterRegion:(CLRegion * __null_unspecified)region;
- (void)locationManager:(CLLocationManager * __null_unspecified)manager didStartMonitoringForRegion:(CLRegion * __null_unspecified)region;
- (void)locationManager:(CLLocationManager * __null_unspecified)manager didExitRegion:(CLRegion * __null_unspecified)region;
- (void)locationManager:(CLLocationManager * __null_unspecified)manager didRangeBeacons:(NSArray * __null_unspecified)beacons inRegion:(CLBeaconRegion * __null_unspecified)region;
@end

@class NSNumber;

SWIFT_CLASS("_TtC12IndoorpinSdk6IPUser")
@interface IPUser : NSObject
@property (nonatomic, readonly) NSNumber * __nonnull IPGENDER_FEMALE;
@property (nonatomic, readonly) NSNumber * __nonnull IPGENDER_MALE;
@property (nonatomic) NSNumber * __nullable gender;
@property (nonatomic) NSNumber * __nullable userId;
@property (nonatomic, copy) NSString * __nullable name;
@property (nonatomic, copy) NSString * __nullable surname;
@property (nonatomic, copy) NSString * __nullable profileImageUrl;
@property (nonatomic, copy) NSString * __nullable email;
@property (nonatomic, copy) NSString * __nullable dateOfBirth;
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC12IndoorpinSdk12IndoorpinSdk")
@interface IndoorpinSdk : NSObject
@property (nonatomic) IPUser * __nullable user;
+ (IndoorpinSdk * __nonnull)sharedInstance;
- (void)initialize:(NSString * __nonnull)apiKey userParam:(IPUser * __nullable)userParam;
- (void)didLogout;
- (void)applicationDidBecomeActive;
- (SWIFT_NULLABILITY(nonnull) instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSNumber (SWIFT_EXTENSION(IndoorpinSdk))
@end


@interface UIButton (SWIFT_EXTENSION(IndoorpinSdk))
@end

#pragma clang diagnostic pop
