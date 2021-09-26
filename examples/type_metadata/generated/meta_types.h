#if !defined(META_TYPES_H)
#define META_TYPES_H
// generated by W:/metadesk/examples/type_metadata/type_metadata.c:400
typedef struct Circle Circle;
struct Circle
{
F32 r;
V2F32 pos;
};
typedef struct RoundedSegment RoundedSegment;
struct RoundedSegment
{
F32 r;
V2F32 p1;
V2F32 p2;
};
typedef struct RoundedPolygon RoundedPolygon;
struct RoundedPolygon
{
F32 r;
U32 count;
V2F32 *p;
};
typedef U32 Shape;
enum
{
Shape_Circle = 1,
Shape_Segment = 2,
Shape_Polygon = 3,
};

// generated by W:/metadesk/examples/type_metadata/type_metadata.c:483
TypeInfo* type_info_from_shape(Shape v);
U32 max_slot_from_shape(Shape v);

// generated by W:/metadesk/examples/type_metadata/type_metadata.c:508
extern TypeInfo U32_type_info;
extern TypeInfo F32_type_info;
extern TypeInfo V2F32_type_info;
extern TypeInfo Circle_type_info;
extern TypeInfo RoundedSegment_type_info;
extern TypeInfo RoundedPolygon_type_info;
extern TypeInfo Shape_type_info;

#endif // META_TYPES_H
