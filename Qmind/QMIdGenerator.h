/**
 * Tae Won Ha
 * http://qvacua.com
 * https://github.com/qvacua
 *
 * See LICENSE
 */

#import <Foundation/Foundation.h>

@protocol TBBean;

@interface QMIdGenerator : NSObject <TBBean>

- (NSString *)nodeId;

@end
