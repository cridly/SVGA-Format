// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: com.opensource.svga.video.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class SVGAProtoFrameEntity;
@class SVGAProtoLayout;
@class SVGAProtoMovieParams;
@class SVGAProtoShapeEntity;
@class SVGAProtoShapeEntity_EllipseArgs;
@class SVGAProtoShapeEntity_RectArgs;
@class SVGAProtoShapeEntity_ShapeArgs;
@class SVGAProtoShapeEntity_ShapeStyle;
@class SVGAProtoShapeEntity_ShapeStyle_RGBAColor;
@class SVGAProtoSpriteEntity;
@class SVGAProtoTransform;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - Enum SVGAProtoShapeEntity_ShapeType

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeType) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SVGAProtoShapeEntity_ShapeType_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  /** 路径 */
  SVGAProtoShapeEntity_ShapeType_Shape = 0,

  /** 矩形 */
  SVGAProtoShapeEntity_ShapeType_Rect = 1,

  /** 圆形 */
  SVGAProtoShapeEntity_ShapeType_Ellipse = 2,

  /** 与前帧一致 */
  SVGAProtoShapeEntity_ShapeType_Keep = 3,
};

GPBEnumDescriptor *SVGAProtoShapeEntity_ShapeType_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SVGAProtoShapeEntity_ShapeType_IsValidValue(int32_t value);

#pragma mark - Enum SVGAProtoShapeEntity_ShapeStyle_LineCap

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeStyle_LineCap) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SVGAProtoShapeEntity_ShapeStyle_LineCap_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SVGAProtoShapeEntity_ShapeStyle_LineCap_LineCapButt = 0,
  SVGAProtoShapeEntity_ShapeStyle_LineCap_LineCapRound = 1,
  SVGAProtoShapeEntity_ShapeStyle_LineCap_LineCapSquare = 2,
};

GPBEnumDescriptor *SVGAProtoShapeEntity_ShapeStyle_LineCap_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SVGAProtoShapeEntity_ShapeStyle_LineCap_IsValidValue(int32_t value);

#pragma mark - Enum SVGAProtoShapeEntity_ShapeStyle_LineJoin

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeStyle_LineJoin) {
  /**
   * Value used if any message's field encounters a value that is not defined
   * by this enum. The message will also have C functions to get/set the rawValue
   * of the field.
   **/
  SVGAProtoShapeEntity_ShapeStyle_LineJoin_GPBUnrecognizedEnumeratorValue = kGPBUnrecognizedEnumeratorValue,
  SVGAProtoShapeEntity_ShapeStyle_LineJoin_LineJoinMiter = 0,
  SVGAProtoShapeEntity_ShapeStyle_LineJoin_LineJoinRound = 1,
  SVGAProtoShapeEntity_ShapeStyle_LineJoin_LineJoinBevel = 2,
};

GPBEnumDescriptor *SVGAProtoShapeEntity_ShapeStyle_LineJoin_EnumDescriptor(void);

/**
 * Checks to see if the given value is defined by the enum or was not known at
 * the time this source was generated.
 **/
BOOL SVGAProtoShapeEntity_ShapeStyle_LineJoin_IsValidValue(int32_t value);

#pragma mark - SVGAProtoComOpensourceSvgaVideoRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface SVGAProtoComOpensourceSvgaVideoRoot : GPBRootObject
@end

#pragma mark - SVGAProtoMovieParams

typedef GPB_ENUM(SVGAProtoMovieParams_FieldNumber) {
  SVGAProtoMovieParams_FieldNumber_ViewBoxWidth = 1,
  SVGAProtoMovieParams_FieldNumber_ViewBoxHeight = 2,
  SVGAProtoMovieParams_FieldNumber_Fps = 3,
  SVGAProtoMovieParams_FieldNumber_Frames = 4,
};

@interface SVGAProtoMovieParams : GPBMessage

/** 画布宽 */
@property(nonatomic, readwrite) float viewBoxWidth;

/** 画布高 */
@property(nonatomic, readwrite) float viewBoxHeight;

/** 动画每秒播放帧数，合法值是 [1, 2, 3, 5, 6, 10, 12, 15, 20, 30, 60] 中的任意一个。 */
@property(nonatomic, readwrite) int32_t fps;

/** 动画总帧数 */
@property(nonatomic, readwrite) int32_t frames;

@end

#pragma mark - SVGAProtoSpriteEntity

typedef GPB_ENUM(SVGAProtoSpriteEntity_FieldNumber) {
  SVGAProtoSpriteEntity_FieldNumber_ImageKey = 1,
  SVGAProtoSpriteEntity_FieldNumber_FramesArray = 2,
};

@interface SVGAProtoSpriteEntity : GPBMessage

/** 元件所对应的位图键名, 如果 imageKey 含有 .vector 后缀，该 sprite 为矢量图层。 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *imageKey;

/** 帧列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SVGAProtoFrameEntity*> *framesArray;
/** The number of items in @c framesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger framesArray_Count;

@end

#pragma mark - SVGAProtoLayout

typedef GPB_ENUM(SVGAProtoLayout_FieldNumber) {
  SVGAProtoLayout_FieldNumber_X = 1,
  SVGAProtoLayout_FieldNumber_Y = 2,
  SVGAProtoLayout_FieldNumber_Width = 3,
  SVGAProtoLayout_FieldNumber_Height = 4,
};

@interface SVGAProtoLayout : GPBMessage

@property(nonatomic, readwrite) float x;

@property(nonatomic, readwrite) float y;

@property(nonatomic, readwrite) float width;

@property(nonatomic, readwrite) float height;

@end

#pragma mark - SVGAProtoTransform

typedef GPB_ENUM(SVGAProtoTransform_FieldNumber) {
  SVGAProtoTransform_FieldNumber_A = 1,
  SVGAProtoTransform_FieldNumber_B = 2,
  SVGAProtoTransform_FieldNumber_C = 3,
  SVGAProtoTransform_FieldNumber_D = 4,
  SVGAProtoTransform_FieldNumber_Tx = 5,
  SVGAProtoTransform_FieldNumber_Ty = 6,
};

@interface SVGAProtoTransform : GPBMessage

@property(nonatomic, readwrite) float a;

@property(nonatomic, readwrite) float b;

@property(nonatomic, readwrite) float c;

@property(nonatomic, readwrite) float d;

@property(nonatomic, readwrite) float tx;

@property(nonatomic, readwrite) float ty;

@end

#pragma mark - SVGAProtoShapeEntity

typedef GPB_ENUM(SVGAProtoShapeEntity_FieldNumber) {
  SVGAProtoShapeEntity_FieldNumber_Type = 1,
  SVGAProtoShapeEntity_FieldNumber_Shape = 2,
  SVGAProtoShapeEntity_FieldNumber_Rect = 3,
  SVGAProtoShapeEntity_FieldNumber_Ellipse = 4,
  SVGAProtoShapeEntity_FieldNumber_Styles = 10,
  SVGAProtoShapeEntity_FieldNumber_Transform = 11,
};

typedef GPB_ENUM(SVGAProtoShapeEntity_Args_OneOfCase) {
  SVGAProtoShapeEntity_Args_OneOfCase_GPBUnsetOneOfCase = 0,
  SVGAProtoShapeEntity_Args_OneOfCase_Shape = 2,
  SVGAProtoShapeEntity_Args_OneOfCase_Rect = 3,
  SVGAProtoShapeEntity_Args_OneOfCase_Ellipse = 4,
};

@interface SVGAProtoShapeEntity : GPBMessage

/** 矢量类型 */
@property(nonatomic, readwrite) SVGAProtoShapeEntity_ShapeType type;

@property(nonatomic, readonly) SVGAProtoShapeEntity_Args_OneOfCase argsOneOfCase;

@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_ShapeArgs *shape;

@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_RectArgs *rect;

@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_EllipseArgs *ellipse;

/** 渲染参数 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_ShapeStyle *styles;
/** Test to see if @c styles has been set. */
@property(nonatomic, readwrite) BOOL hasStyles;

/** 矢量图层 2D 变换矩阵 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoTransform *transform;
/** Test to see if @c transform has been set. */
@property(nonatomic, readwrite) BOOL hasTransform;

@end

/**
 * Fetches the raw value of a @c SVGAProtoShapeEntity's @c type property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SVGAProtoShapeEntity_Type_RawValue(SVGAProtoShapeEntity *message);
/**
 * Sets the raw value of an @c SVGAProtoShapeEntity's @c type property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSVGAProtoShapeEntity_Type_RawValue(SVGAProtoShapeEntity *message, int32_t value);

/**
 * Clears whatever value was set for the oneof 'args'.
 **/
void SVGAProtoShapeEntity_ClearArgsOneOfCase(SVGAProtoShapeEntity *message);

#pragma mark - SVGAProtoShapeEntity_ShapeArgs

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeArgs_FieldNumber) {
  SVGAProtoShapeEntity_ShapeArgs_FieldNumber_D = 1,
};

@interface SVGAProtoShapeEntity_ShapeArgs : GPBMessage

/** SVG 路径 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *d;

@end

#pragma mark - SVGAProtoShapeEntity_RectArgs

typedef GPB_ENUM(SVGAProtoShapeEntity_RectArgs_FieldNumber) {
  SVGAProtoShapeEntity_RectArgs_FieldNumber_X = 1,
  SVGAProtoShapeEntity_RectArgs_FieldNumber_Y = 2,
  SVGAProtoShapeEntity_RectArgs_FieldNumber_Width = 3,
  SVGAProtoShapeEntity_RectArgs_FieldNumber_Height = 4,
  SVGAProtoShapeEntity_RectArgs_FieldNumber_CornerRadius = 5,
};

@interface SVGAProtoShapeEntity_RectArgs : GPBMessage

@property(nonatomic, readwrite) float x;

@property(nonatomic, readwrite) float y;

@property(nonatomic, readwrite) float width;

@property(nonatomic, readwrite) float height;

/** 圆角半径 */
@property(nonatomic, readwrite) float cornerRadius;

@end

#pragma mark - SVGAProtoShapeEntity_EllipseArgs

typedef GPB_ENUM(SVGAProtoShapeEntity_EllipseArgs_FieldNumber) {
  SVGAProtoShapeEntity_EllipseArgs_FieldNumber_X = 1,
  SVGAProtoShapeEntity_EllipseArgs_FieldNumber_Y = 2,
  SVGAProtoShapeEntity_EllipseArgs_FieldNumber_RadiusX = 3,
  SVGAProtoShapeEntity_EllipseArgs_FieldNumber_RadiusY = 4,
};

@interface SVGAProtoShapeEntity_EllipseArgs : GPBMessage

/** 圆中心点 X */
@property(nonatomic, readwrite) float x;

/** 圆中心点 Y */
@property(nonatomic, readwrite) float y;

/** 横向半径 */
@property(nonatomic, readwrite) float radiusX;

/** 纵向半径 */
@property(nonatomic, readwrite) float radiusY;

@end

#pragma mark - SVGAProtoShapeEntity_ShapeStyle

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeStyle_FieldNumber) {
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_Fill = 1,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_Stroke = 2,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_StrokeWidth = 3,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_LineCap = 4,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_LineJoin = 5,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_MiterLimit = 6,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_LineDashI = 7,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_LineDashIi = 8,
  SVGAProtoShapeEntity_ShapeStyle_FieldNumber_LineDashIii = 9,
};

@interface SVGAProtoShapeEntity_ShapeStyle : GPBMessage

/** 填充色 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_ShapeStyle_RGBAColor *fill;
/** Test to see if @c fill has been set. */
@property(nonatomic, readwrite) BOOL hasFill;

/** 描边色 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoShapeEntity_ShapeStyle_RGBAColor *stroke;
/** Test to see if @c stroke has been set. */
@property(nonatomic, readwrite) BOOL hasStroke;

/** 描边宽 */
@property(nonatomic, readwrite) float strokeWidth;

/** 线段端点样式 */
@property(nonatomic, readwrite) SVGAProtoShapeEntity_ShapeStyle_LineCap lineCap;

/** 线段连接样式 */
@property(nonatomic, readwrite) SVGAProtoShapeEntity_ShapeStyle_LineJoin lineJoin;

/** 尖角限制 */
@property(nonatomic, readwrite) float miterLimit;

/** 虚线参数 Dash */
@property(nonatomic, readwrite) float lineDashI;

/** 虚线参数 Gap */
@property(nonatomic, readwrite) float lineDashIi;

/** 虚线参数 Offset */
@property(nonatomic, readwrite) float lineDashIii;

@end

/**
 * Fetches the raw value of a @c SVGAProtoShapeEntity_ShapeStyle's @c lineCap property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SVGAProtoShapeEntity_ShapeStyle_LineCap_RawValue(SVGAProtoShapeEntity_ShapeStyle *message);
/**
 * Sets the raw value of an @c SVGAProtoShapeEntity_ShapeStyle's @c lineCap property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSVGAProtoShapeEntity_ShapeStyle_LineCap_RawValue(SVGAProtoShapeEntity_ShapeStyle *message, int32_t value);

/**
 * Fetches the raw value of a @c SVGAProtoShapeEntity_ShapeStyle's @c lineJoin property, even
 * if the value was not defined by the enum at the time the code was generated.
 **/
int32_t SVGAProtoShapeEntity_ShapeStyle_LineJoin_RawValue(SVGAProtoShapeEntity_ShapeStyle *message);
/**
 * Sets the raw value of an @c SVGAProtoShapeEntity_ShapeStyle's @c lineJoin property, allowing
 * it to be set to a value that was not defined by the enum at the time the code
 * was generated.
 **/
void SetSVGAProtoShapeEntity_ShapeStyle_LineJoin_RawValue(SVGAProtoShapeEntity_ShapeStyle *message, int32_t value);

#pragma mark - SVGAProtoShapeEntity_ShapeStyle_RGBAColor

typedef GPB_ENUM(SVGAProtoShapeEntity_ShapeStyle_RGBAColor_FieldNumber) {
  SVGAProtoShapeEntity_ShapeStyle_RGBAColor_FieldNumber_R = 1,
  SVGAProtoShapeEntity_ShapeStyle_RGBAColor_FieldNumber_G = 2,
  SVGAProtoShapeEntity_ShapeStyle_RGBAColor_FieldNumber_B = 3,
  SVGAProtoShapeEntity_ShapeStyle_RGBAColor_FieldNumber_A = 4,
};

@interface SVGAProtoShapeEntity_ShapeStyle_RGBAColor : GPBMessage

@property(nonatomic, readwrite) float r;

@property(nonatomic, readwrite) float g;

@property(nonatomic, readwrite) float b;

@property(nonatomic, readwrite) float a;

@end

#pragma mark - SVGAProtoFrameEntity

typedef GPB_ENUM(SVGAProtoFrameEntity_FieldNumber) {
  SVGAProtoFrameEntity_FieldNumber_Alpha = 1,
  SVGAProtoFrameEntity_FieldNumber_Layout = 2,
  SVGAProtoFrameEntity_FieldNumber_Transform = 3,
  SVGAProtoFrameEntity_FieldNumber_ClipPath = 4,
  SVGAProtoFrameEntity_FieldNumber_ShapesArray = 5,
};

@interface SVGAProtoFrameEntity : GPBMessage

/** 透明度 */
@property(nonatomic, readwrite) float alpha;

/** 初始约束大小 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoLayout *layout;
/** Test to see if @c layout has been set. */
@property(nonatomic, readwrite) BOOL hasLayout;

/** 2D 变换矩阵 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoTransform *transform;
/** Test to see if @c transform has been set. */
@property(nonatomic, readwrite) BOOL hasTransform;

/** 遮罩路径，使用 SVG 标准 Path 绘制图案进行 Mask 遮罩。 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *clipPath;

/** 矢量元素列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SVGAProtoShapeEntity*> *shapesArray;
/** The number of items in @c shapesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger shapesArray_Count;

@end

#pragma mark - SVGAProtoMovieEntity

typedef GPB_ENUM(SVGAProtoMovieEntity_FieldNumber) {
  SVGAProtoMovieEntity_FieldNumber_Version = 1,
  SVGAProtoMovieEntity_FieldNumber_Params = 2,
  SVGAProtoMovieEntity_FieldNumber_Images = 3,
  SVGAProtoMovieEntity_FieldNumber_SpritesArray = 4,
};

@interface SVGAProtoMovieEntity : GPBMessage

/** SVGA 格式版本号 */
@property(nonatomic, readwrite, copy, null_resettable) NSString *version;

/** 动画参数 */
@property(nonatomic, readwrite, strong, null_resettable) SVGAProtoMovieParams *params;
/** Test to see if @c params has been set. */
@property(nonatomic, readwrite) BOOL hasParams;

/** Key 是位图键名，Value 是位图文件名或 Base64 数据。 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableDictionary<NSString*, NSString*> *images;
/** The number of items in @c images without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger images_Count;

/** 元素列表 */
@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<SVGAProtoSpriteEntity*> *spritesArray;
/** The number of items in @c spritesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger spritesArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
