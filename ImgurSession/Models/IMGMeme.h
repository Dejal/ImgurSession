//
//  IMGMeme.h
//  ImgurSession
//
//  Created by Xtreme Dev on 2014-05-14.
//  Copyright (c) 2014 GeoffMacDonald. All rights reserved.
//

#import "IMGImage.h"

@interface IMGMeme : IMGImage

@property (readonly,nonatomic,copy) NSString * topText;
@property (readonly,nonatomic,copy) NSString * bottomText;

@end
