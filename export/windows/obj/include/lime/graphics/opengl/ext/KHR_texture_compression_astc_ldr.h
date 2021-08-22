// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr
#define INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_34b59b2f01b3fbe6_4_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,KHR_texture_compression_astc_ldr)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES KHR_texture_compression_astc_ldr_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef KHR_texture_compression_astc_ldr_obj OBJ_;
		KHR_texture_compression_astc_ldr_obj();

	public:
		enum { _hx_ClassId = 0x7f6a8889 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr"); }

		inline static ::hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > __new() {
			::hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > __this = new KHR_texture_compression_astc_ldr_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< KHR_texture_compression_astc_ldr_obj > __alloc(::hx::Ctx *_hx_ctx) {
			KHR_texture_compression_astc_ldr_obj *__this = (KHR_texture_compression_astc_ldr_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(KHR_texture_compression_astc_ldr_obj), false, "lime.graphics.opengl.ext.KHR_texture_compression_astc_ldr"));
			*(void **)__this = KHR_texture_compression_astc_ldr_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_34b59b2f01b3fbe6_4_new)
HXLINE(  33)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR = 37853;
HXLINE(  32)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR = 37852;
HXLINE(  31)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR = 37851;
HXLINE(  30)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR = 37850;
HXLINE(  29)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR = 37849;
HXLINE(  28)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR = 37848;
HXLINE(  27)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR = 37847;
HXLINE(  26)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR = 37846;
HXLINE(  25)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR = 37845;
HXLINE(  24)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR = 37844;
HXLINE(  23)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR = 37843;
HXLINE(  22)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR = 37842;
HXLINE(  21)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR = 37841;
HXLINE(  20)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR = 37840;
HXLINE(  19)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_12x12_KHR = 37821;
HXLINE(  18)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_12x10_KHR = 37820;
HXLINE(  17)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_10x10_KHR = 37819;
HXLINE(  16)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_10x8_KHR = 37818;
HXLINE(  15)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_10x6_KHR = 37817;
HXLINE(  14)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_10x5_KHR = 37816;
HXLINE(  13)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_8x8_KHR = 37815;
HXLINE(  12)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_8x6_KHR = 37814;
HXLINE(  11)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_8x5_KHR = 37813;
HXLINE(  10)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_6x6_KHR = 37812;
HXLINE(   9)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_6x5_KHR = 37811;
HXLINE(   8)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_5x5_KHR = 37810;
HXLINE(   7)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_5x4_KHR = 37809;
HXLINE(   6)		( ( ::lime::graphics::opengl::ext::KHR_texture_compression_astc_ldr)(__this) )->COMPRESSED_RGBA_ASTC_4x4_KHR = 37808;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~KHR_texture_compression_astc_ldr_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("KHR_texture_compression_astc_ldr",63,29,b6,ea); }

		int COMPRESSED_RGBA_ASTC_4x4_KHR;
		int COMPRESSED_RGBA_ASTC_5x4_KHR;
		int COMPRESSED_RGBA_ASTC_5x5_KHR;
		int COMPRESSED_RGBA_ASTC_6x5_KHR;
		int COMPRESSED_RGBA_ASTC_6x6_KHR;
		int COMPRESSED_RGBA_ASTC_8x5_KHR;
		int COMPRESSED_RGBA_ASTC_8x6_KHR;
		int COMPRESSED_RGBA_ASTC_8x8_KHR;
		int COMPRESSED_RGBA_ASTC_10x5_KHR;
		int COMPRESSED_RGBA_ASTC_10x6_KHR;
		int COMPRESSED_RGBA_ASTC_10x8_KHR;
		int COMPRESSED_RGBA_ASTC_10x10_KHR;
		int COMPRESSED_RGBA_ASTC_12x10_KHR;
		int COMPRESSED_RGBA_ASTC_12x12_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR;
		int COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_KHR_texture_compression_astc_ldr */ 
