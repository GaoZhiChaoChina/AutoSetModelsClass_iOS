
#import <Foundation/Foundation.h>

@interface myCards :NSObject

- (instancetype)initWithDict:(NSDictionary *)dict;

@end


@interface orderNum :NSObject
@property (nonatomic, assign) NSInteger payment;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end


@interface data :NSObject
@property (nonatomic,   copy) NSString *puid;
@property (nonatomic, assign) NSInteger myCardsCount;
@property (nonatomic, strong) NSArray *myCards;
@property (nonatomic, assign) NSInteger couponsCount;
@property (nonatomic, strong) orderNum *orderNum;
@property (nonatomic, assign) NSInteger orderCount;
@property (nonatomic,   copy) NSString *pocketMoney;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end


@interface qqq :NSObject
@property (nonatomic, assign) NSInteger status;
@property (nonatomic,   copy) NSString *message;
@property (nonatomic, strong) data *data;
@property (nonatomic,   copy) NSString *msg;

- (instancetype)initWithDict:(NSDictionary *)dict;

@end

