//
//  OALog.h
//  OsmAnd
//
//  Created by Alexey Pelykh on 3/30/14.
//  Copyright (c) 2014 OsmAnd. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __cplusplus
extern "C" {
#endif
    void OALog(NSString *format, ...) __attribute__((format(__NSString__, 1, 2)));
#if __cplusplus
}
#endif

@interface OALogger : NSObject

@end