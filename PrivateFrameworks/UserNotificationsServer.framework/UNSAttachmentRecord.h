/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSAttachmentRecord : NSObject {
    NSURL * _URL;
    unsigned int  _family;
    NSString * _identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailClippingRect;
    NSNumber * _thumbnailFrameNumber;
    BOOL  _thumbnailHidden;
    struct { 
        int value; 
        int timescale; 
        unsigned int flags; 
        int epoch; 
    }  _thumbnailTimestamp;
    NSString * _type;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) unsigned int family;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } thumbnailClippingRect;
@property (nonatomic, copy) NSNumber *thumbnailFrameNumber;
@property (nonatomic) BOOL thumbnailHidden;
@property (nonatomic) struct { int x1; int x2; unsigned int x3; int x4; } thumbnailTimestamp;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)family;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setFamily:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setThumbnailClippingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailFrameNumber:(id)arg1;
- (void)setThumbnailHidden:(BOOL)arg1;
- (void)setThumbnailTimestamp:(struct { int x1; int x2; unsigned int x3; int x4; })arg1;
- (void)setType:(id)arg1;
- (void)setURL:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailClippingRect;
- (id)thumbnailFrameNumber;
- (BOOL)thumbnailHidden;
- (struct { int x1; int x2; unsigned int x3; int x4; })thumbnailTimestamp;
- (id)type;

@end