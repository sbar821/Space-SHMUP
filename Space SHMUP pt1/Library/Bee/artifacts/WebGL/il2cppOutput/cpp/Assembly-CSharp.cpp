#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>
struct Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.IEqualityComparer`1<eWeaponType>
struct IEqualityComparer_1_t7A7E18FE96D7F31972C680F5A1AAE9C694E2345C;
// System.Collections.Generic.Dictionary`2/KeyCollection<eWeaponType,WeaponDefinition>
struct KeyCollection_tD65F9913502FBB6BE1F3998D1FFE3E266D5AF01E;
// System.Collections.Generic.List`1<EnemyShield>
struct List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<eWeaponType,WeaponDefinition>
struct ValueCollection_t313ED401721699AB1A3EBE4F6F0B06E309F283FF;
// System.Collections.Generic.Dictionary`2/Entry<eWeaponType,WeaponDefinition>[]
struct EntryU5BU5D_t9C0A01BE4A64D1DE442BF48149A7466B0FBD03A3;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// EnemyShield[]
struct EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_SubMesh[]
struct TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Weapon[]
struct WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14;
// WeaponDefinition[]
struct WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// eWeaponType[]
struct eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// BlinkColorOnHit
struct BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC;
// BoundsCheck
struct BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// EnemyShield
struct EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD;
// Enemy_0
struct Enemy_0_t8147A7FB8C07B25DA3FFCC5330F18064F4FDC820;
// Enemy_1
struct Enemy_1_tF4D9D79CFE4DE8CF8B3AA54DF5C113143F4560E9;
// Enemy_2
struct Enemy_2_t5B12C02BD16077BC1CDA462474C1909A8E92EED4;
// Enemy_3
struct Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0;
// Enemy_4
struct Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Hero
struct Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Parallax
struct Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73;
// PowerUp
struct PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232;
// ProjectileHero
struct ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Shield
struct Shield_tD442A7319E3274746E5753D39FDA609B3535733F;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302;
// WeaponDefinition
struct WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Hero/WeaponFireDelegate
struct WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* eWeaponType_t232831B45101E65DF7CFD2206B61A6A2C9A5BD13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270;
IL2CPP_EXTERN_C String_t* _stringLiteral1367F16A70C2DA603FDEE9A74DE2B0ABC5CB061A;
IL2CPP_EXTERN_C String_t* _stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979;
IL2CPP_EXTERN_C String_t* _stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC;
IL2CPP_EXTERN_C String_t* _stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9;
IL2CPP_EXTERN_C String_t* _stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D;
IL2CPP_EXTERN_C String_t* _stringLiteralC28AEFE68EA3311DBDA6C62162FEF737EBDC9EE2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m20BFEEA4A374B3C291242E2053CAE8A8130334D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisHero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_mF3360EE369411FAD1664005F6A77A043F97BEF7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_m1AF16B49556107508A403F09C4330522A69A198B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m9BB0E787978B20C86A4513742E7A706D572AF78C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m38B2AB172FB123A86BF8B779218FBC10B4D0C76B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5942A5581CDDCC1437BCFF7D033CDF92F2FFC4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m78414832D5C786EC1E636FB219A2DBEFDAE244B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD471442CC105B43A365AEE91579F8D209FBD2276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7427826656BC7807D1C4A54B30702E7F08C2F412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m87251298324550CBEB9327F31E1F96E2B675731D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65EC7429B7BB9756C3AD7274D9A9FF1FFA8A3038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m658D33C5F7E15D76CED73A8FD2A5AF9B0EA9049F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mDA2954C333C064586DD3754F8FC204AFFA40EB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF65E0F244C569063C8227C929997311BDCD92FE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Weapon_Fire_m0991C13F9C9A395330E5F600C1B36AF91EA01AFE_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14;
struct WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB;
struct eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9;
struct Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>
struct Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t9C0A01BE4A64D1DE442BF48149A7466B0FBD03A3* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD65F9913502FBB6BE1F3998D1FFE3E266D5AF01E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t313ED401721699AB1A3EBE4F6F0B06E309F283FF* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<EnemyShield>
struct List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<EnemyShield>
struct Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// UnityEngine.ContactPoint
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 
{
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.ContactPoint::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.Int32 UnityEngine.ContactPoint::m_ThisColliderInstanceID
	int32_t ___m_ThisColliderInstanceID_2;
	// System.Int32 UnityEngine.ContactPoint::m_OtherColliderInstanceID
	int32_t ___m_OtherColliderInstanceID_3;
	// System.Single UnityEngine.ContactPoint::m_Separation
	float ___m_Separation_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// System.Int32Enum
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;
};

// TMPro.MaskingTypes
struct MaskingTypes_tF4913BE3D6A47C3AD642902F83C6C52B4A39D2B5 
{
	// System.Int32 TMPro.MaskingTypes::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// eWeaponType
struct eWeaponType_t232831B45101E65DF7CFD2206B61A6A2C9A5BD13 
{
	// System.Int32 eWeaponType::value__
	int32_t ___value___2;
};

// BoundsCheck/eScreenLocs
struct eScreenLocs_tABB08AE3C0D0EC396D09C2B08E9DDFC1B38C0CDE 
{
	// System.Int32 BoundsCheck/eScreenLocs::value__
	int32_t ___value___2;
};

// BoundsCheck/eType
struct eType_t90A9DB694E480A0CA6B16F59DAB8E7436555D04C 
{
	// System.Int32 BoundsCheck/eType::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// WeaponDefinition
struct WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6  : public RuntimeObject
{
	// eWeaponType WeaponDefinition::type
	int32_t ___type_0;
	// System.String WeaponDefinition::letter
	String_t* ___letter_1;
	// UnityEngine.Color WeaponDefinition::powerUpColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___powerUpColor_2;
	// UnityEngine.GameObject WeaponDefinition::weaponModelPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weaponModelPrefab_3;
	// UnityEngine.GameObject WeaponDefinition::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_4;
	// UnityEngine.Color WeaponDefinition::projectileColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___projectileColor_5;
	// System.Single WeaponDefinition::damageOnHit
	float ___damageOnHit_6;
	// System.Single WeaponDefinition::damagePerSec
	float ___damagePerSec_7;
	// System.Single WeaponDefinition::delayBetweenShots
	float ___delayBetweenShots_8;
	// System.Single WeaponDefinition::velocity
	float ___velocity_9;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// Hero/WeaponFireDelegate
struct WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C  : public MulticastDelegate_t
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// BlinkColorOnHit
struct BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean BlinkColorOnHit::showingColor
	bool ___showingColor_6;
	// System.Single BlinkColorOnHit::blinkCompleteTime
	float ___blinkCompleteTime_7;
	// System.Boolean BlinkColorOnHit::ignoreOnCollisionEnter
	bool ___ignoreOnCollisionEnter_8;
	// UnityEngine.Material[] BlinkColorOnHit::materials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___materials_9;
	// UnityEngine.Color[] BlinkColorOnHit::originalColors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___originalColors_10;
	// BoundsCheck BlinkColorOnHit::bndCheck
	BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* ___bndCheck_11;
};

// BoundsCheck
struct BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoundsCheck/eType BoundsCheck::boundsType
	int32_t ___boundsType_4;
	// System.Single BoundsCheck::radius
	float ___radius_5;
	// System.Boolean BoundsCheck::keepOnScreen
	bool ___keepOnScreen_6;
	// BoundsCheck/eScreenLocs BoundsCheck::screenLocs
	int32_t ___screenLocs_7;
	// System.Single BoundsCheck::camWidth
	float ___camWidth_8;
	// System.Single BoundsCheck::camHeight
	float ___camHeight_9;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Enemy::speed
	float ___speed_4;
	// System.Single Enemy::fireRate
	float ___fireRate_5;
	// System.Single Enemy::health
	float ___health_6;
	// System.Int32 Enemy::score
	int32_t ___score_7;
	// System.Single Enemy::powerUpDropChance
	float ___powerUpDropChance_8;
	// UnityEngine.AudioClip Enemy::destroySound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___destroySound_9;
	// System.Boolean Enemy::calledShipDestroyed
	bool ___calledShipDestroyed_10;
	// BoundsCheck Enemy::bndCheck
	BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* ___bndCheck_11;
};

// EnemyShield
struct EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyShield::health
	float ___health_4;
	// System.Collections.Generic.List`1<EnemyShield> EnemyShield::protectors
	List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* ___protectors_5;
	// BlinkColorOnHit EnemyShield::blinker
	BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* ___blinker_6;
};

// Hero
struct Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Hero::speed
	float ___speed_5;
	// System.Single Hero::rollMult
	float ___rollMult_6;
	// System.Single Hero::pitchMult
	float ___pitchMult_7;
	// UnityEngine.GameObject Hero::projectilePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectilePrefab_8;
	// System.Single Hero::projectileSpeed
	float ___projectileSpeed_9;
	// Weapon[] Hero::weapons
	WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* ___weapons_10;
	// System.Single Hero::_shieldLevel
	float ____shieldLevel_11;
	// UnityEngine.GameObject Hero::lastTriggerGo
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lastTriggerGo_12;
	// Hero/WeaponFireDelegate Hero::fireEvent
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* ___fireEvent_13;
};

// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Main::spawnEnemies
	bool ___spawnEnemies_6;
	// UnityEngine.GameObject[] Main::prefabEnemies
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___prefabEnemies_7;
	// System.Single Main::enemySpawnPerSecond
	float ___enemySpawnPerSecond_8;
	// System.Single Main::enemyInsetDefault
	float ___enemyInsetDefault_9;
	// System.Single Main::gameRestartDelay
	float ___gameRestartDelay_10;
	// UnityEngine.GameObject Main::prefabPowerUp
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___prefabPowerUp_11;
	// WeaponDefinition[] Main::weaponDefinitions
	WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB* ___weaponDefinitions_12;
	// eWeaponType[] Main::powerUpFrequency
	eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9* ___powerUpFrequency_13;
	// BoundsCheck Main::bndCheck
	BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* ___bndCheck_14;
};

// Parallax
struct Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Parallax::playerTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___playerTrans_4;
	// UnityEngine.Transform[] Parallax::panels
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___panels_5;
	// System.Single Parallax::scrollSpeed
	float ___scrollSpeed_6;
	// System.Single Parallax::motionMult
	float ___motionMult_7;
	// System.Single Parallax::panelHt
	float ___panelHt_8;
	// System.Single Parallax::depth
	float ___depth_9;
};

// PowerUp
struct PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 PowerUp::rotMinMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rotMinMax_4;
	// UnityEngine.Vector2 PowerUp::driftMinMax
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___driftMinMax_5;
	// System.Single PowerUp::lifeTime
	float ___lifeTime_6;
	// System.Single PowerUp::fadeTime
	float ___fadeTime_7;
	// eWeaponType PowerUp::type
	int32_t ___type_8;
	// UnityEngine.GameObject PowerUp::cube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cube_9;
	// TMPro.TextMeshPro PowerUp::letter
	TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* ___letter_10;
	// UnityEngine.Vector3 PowerUp::rotPerSecond
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotPerSecond_11;
	// System.Single PowerUp::birthTime
	float ___birthTime_12;
	// UnityEngine.Rigidbody PowerUp::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_13;
	// BoundsCheck PowerUp::bndCheck
	BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* ___bndCheck_14;
	// UnityEngine.Material PowerUp::cubeMat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___cubeMat_15;
};

// ProjectileHero
struct ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BoundsCheck ProjectileHero::bndCheck
	BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* ___bndCheck_4;
	// UnityEngine.Renderer ProjectileHero::rend
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rend_5;
	// UnityEngine.Rigidbody ProjectileHero::rigid
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigid_6;
	// eWeaponType ProjectileHero::_type
	int32_t ____type_7;
};

// Shield
struct Shield_tD442A7319E3274746E5753D39FDA609B3535733F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Shield::rotationsPerSecond
	float ___rotationsPerSecond_4;
	// System.Int32 Shield::levelShown
	int32_t ___levelShown_5;
	// UnityEngine.Material Shield::mat
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___mat_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Utils
struct Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// eWeaponType Weapon::_type
	int32_t ____type_5;
	// WeaponDefinition Weapon::def
	WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* ___def_6;
	// System.Single Weapon::nextShotTime
	float ___nextShotTime_7;
	// UnityEngine.GameObject Weapon::weaponModel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___weaponModel_8;
	// UnityEngine.Transform Weapon::shotPointTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___shotPointTrans_9;
};

// Enemy_0
struct Enemy_0_t8147A7FB8C07B25DA3FFCC5330F18064F4FDC820  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
};

// Enemy_1
struct Enemy_1_tF4D9D79CFE4DE8CF8B3AA54DF5C113143F4560E9  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// System.Single Enemy_1::waveFrequency
	float ___waveFrequency_12;
	// System.Single Enemy_1::waveWidth
	float ___waveWidth_13;
	// System.Single Enemy_1::waveRotY
	float ___waveRotY_14;
	// System.Single Enemy_1::x0
	float ___x0_15;
	// System.Single Enemy_1::birthTime
	float ___birthTime_16;
};

// Enemy_2
struct Enemy_2_t5B12C02BD16077BC1CDA462474C1909A8E92EED4  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// System.Single Enemy_2::lifeTime
	float ___lifeTime_12;
	// System.Single Enemy_2::sinEccentricity
	float ___sinEccentricity_13;
	// UnityEngine.AnimationCurve Enemy_2::rotCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___rotCurve_14;
	// System.Single Enemy_2::birthTime
	float ___birthTime_15;
	// UnityEngine.Quaternion Enemy_2::baseRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___baseRotation_16;
	// UnityEngine.Vector3 Enemy_2::p0
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0_17;
	// UnityEngine.Vector3 Enemy_2::p1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p1_18;
};

// Enemy_3
struct Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// System.Single Enemy_3::lifeTime
	float ___lifeTime_12;
	// UnityEngine.Vector3 Enemy_3::midpointYRange
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___midpointYRange_13;
	// System.Boolean Enemy_3::drawDebugInfo
	bool ___drawDebugInfo_14;
	// UnityEngine.Vector3[] Enemy_3::points
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___points_15;
	// System.Single Enemy_3::birthTime
	float ___birthTime_16;
};

// Enemy_4
struct Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70  : public Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB
{
	// System.Single Enemy_4::duration
	float ___duration_12;
	// EnemyShield[] Enemy_4::allShields
	EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* ___allShields_13;
	// EnemyShield Enemy_4::thisShield
	EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* ___thisShield_14;
	// UnityEngine.Vector3 Enemy_4::p0
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p0_15;
	// UnityEngine.Vector3 Enemy_4::p1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___p1_16;
	// System.Single Enemy_4::timeStart
	float ___timeStart_17;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_37;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_38;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_39;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_41;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_42;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_43;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_44;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_45;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_50;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_51;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_52;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_54;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_57;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_58;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_59;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_60;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_61;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_62;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_63;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_64;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_66;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_67;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_68;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_69;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_71;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_72;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_73;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_74;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_75;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_76;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_78;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_79;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_80;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_81;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_82;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_84;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_85;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_87;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_89;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_90;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_91;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_92;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_93;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_94;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_95;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_96;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_97;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_98;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_99;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_100;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_101;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_103;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_104;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_105;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_106;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_107;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_108;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_109;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_110;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_111;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_112;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_113;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_114;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_115;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_116;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_117;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_118;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_119;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_120;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_121;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_122;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_123;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_124;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_125;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_126;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_127;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_128;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_129;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_130;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_131;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_133;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_134;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_135;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_136;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_137;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_138;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_139;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_142;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_143;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_144;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_145;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_146;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_147;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_148;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_149;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_150;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_151;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_152;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_153;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_154;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_155;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_156;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_158;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_159;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_160;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_161;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_162;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_163;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_166;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_167;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_168;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_169;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_170;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_171;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_172;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_173;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_174;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_175;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_176;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_177;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_178;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_179;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_180;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_181;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_182;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_183;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_184;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_185;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_198;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_200;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_201;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_208;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_213;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_214;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_215;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_216;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_217;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_218;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_219;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_220;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_221;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_223;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_224;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_225;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_226;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_230;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_231;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_233;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_234;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_235;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_236;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_237;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_239;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_241;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_242;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_243;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_244;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_245;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_246;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_248;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_250;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_251;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_252;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_253;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_254;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_258;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_259;
};

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Int32 TMPro.TextMeshPro::_SortingLayer
	int32_t ____SortingLayer_266;
	// System.Int32 TMPro.TextMeshPro::_SortingLayerID
	int32_t ____SortingLayerID_267;
	// System.Int32 TMPro.TextMeshPro::_SortingOrder
	int32_t ____SortingOrder_268;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshPro::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_269;
	// System.Boolean TMPro.TextMeshPro::m_currentAutoSizeMode
	bool ___m_currentAutoSizeMode_270;
	// System.Boolean TMPro.TextMeshPro::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// System.Single TMPro.TextMeshPro::m_previousLossyScaleY
	float ___m_previousLossyScaleY_272;
	// UnityEngine.Renderer TMPro.TextMeshPro::m_renderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___m_renderer_273;
	// UnityEngine.MeshFilter TMPro.TextMeshPro::m_meshFilter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___m_meshFilter_274;
	// System.Boolean TMPro.TextMeshPro::m_isFirstAllocation
	bool ___m_isFirstAllocation_275;
	// System.Int32 TMPro.TextMeshPro::m_max_characters
	int32_t ___m_max_characters_276;
	// System.Int32 TMPro.TextMeshPro::m_max_numberOfLines
	int32_t ___m_max_numberOfLines_277;
	// TMPro.TMP_SubMesh[] TMPro.TextMeshPro::m_subTextObjects
	TMP_SubMeshU5BU5D_t48FE70F8537594C6446E85588EB5D69635194CB9* ___m_subTextObjects_278;
	// TMPro.MaskingTypes TMPro.TextMeshPro::m_maskType
	int32_t ___m_maskType_279;
	// UnityEngine.Matrix4x4 TMPro.TextMeshPro::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_280;
	// UnityEngine.Vector3[] TMPro.TextMeshPro::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_281;
	// System.Boolean TMPro.TextMeshPro::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_282;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>

// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>

// System.Collections.Generic.List`1<EnemyShield>
struct List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<EnemyShield>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0;
};

// <PrivateImplementationDetails>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Collections.Generic.List`1/Enumerator<EnemyShield>

// System.Collections.Generic.List`1/Enumerator<EnemyShield>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.Collision

// UnityEngine.Collision

// UnityEngine.ContactPoint

// UnityEngine.ContactPoint

// System.Delegate

// System.Delegate

// System.Int32Enum

// System.Int32Enum

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeFieldHandle

// System.RuntimeFieldHandle

// eWeaponType

// eWeaponType

// BoundsCheck/eScreenLocs

// BoundsCheck/eScreenLocs

// BoundsCheck/eType

// BoundsCheck/eType

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// WeaponDefinition

// WeaponDefinition

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Collider

// UnityEngine.Collider

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// UnityEngine.Renderer

// UnityEngine.Renderer

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// Hero/WeaponFireDelegate

// Hero/WeaponFireDelegate

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// BlinkColorOnHit
struct BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_StaticFields
{
	// System.Single BlinkColorOnHit::blinkDuration
	float ___blinkDuration_4;
	// UnityEngine.Color BlinkColorOnHit::blinkColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___blinkColor_5;
};

// BlinkColorOnHit

// BoundsCheck

// BoundsCheck

// Enemy

// Enemy

// EnemyShield

// EnemyShield

// Hero
struct Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields
{
	// Hero Hero::<S>k__BackingField
	Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* ___U3CSU3Ek__BackingField_4;
};

// Hero

// Main
struct Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields
{
	// Main Main::S
	Main_t6125012C4D88701077DD3C4660130C5535730E1E* ___S_4;
	// System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition> Main::WEAP_DICT
	Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* ___WEAP_DICT_5;
};

// Main

// Parallax

// Parallax

// PowerUp

// PowerUp

// ProjectileHero

// ProjectileHero

// Shield

// Shield

// Utils

// Utils

// Weapon
struct Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_StaticFields
{
	// UnityEngine.Transform Weapon::PROJECTILE_ANCHOR
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___PROJECTILE_ANCHOR_4;
};

// Weapon

// Enemy_0

// Enemy_0

// Enemy_1

// Enemy_1

// Enemy_2

// Enemy_2

// Enemy_3

// Enemy_3

// Enemy_4

// Enemy_4

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_46;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_48;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_56;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_164;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_165;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_206;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_207;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_255;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_256;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_260;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_261;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_262;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_263;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_264;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_265;
};

// TMPro.TMP_Text

// TMPro.TextMeshPro
struct TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_283;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_284;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshPro::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_302;
};

// TMPro.TextMeshPro
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D  : public RuntimeArray
{
	ALIGN_FIELD (8) Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* m_Items[1];

	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// EnemyShield[]
struct EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88  : public RuntimeArray
{
	ALIGN_FIELD (8) EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* m_Items[1];

	inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 m_Items[1];

	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9 value)
	{
		m_Items[index] = value;
	}
};
// Weapon[]
struct WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14  : public RuntimeArray
{
	ALIGN_FIELD (8) Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* m_Items[1];

	inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// WeaponDefinition[]
struct WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB  : public RuntimeArray
{
	ALIGN_FIELD (8) WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* m_Items[1];

	inline WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// eWeaponType[]
struct eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[,]
struct Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Renderer[]
struct RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A  : public RuntimeArray
{
	ALIGN_FIELD (8) Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* m_Items[1];

	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponentInParent<BoundsCheck>()
inline BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* Component_GetComponentInParent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m20BFEEA4A374B3C291242E2053CAE8A8130334D8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Material[] Utils::GetAllMaterials(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Utils_GetAllMaterials_m5CC13A89BE2CE0687D8C076E71CF34161510CFE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Material::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Void BlinkColorOnHit::RevertColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_RevertColors_m2E1BA1D468EC81D34F7AFDF48B33AE21F54321BA (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ProjectileHero>()
inline ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean BoundsCheck::get_isOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, const RuntimeMethod* method) ;
// System.Void BlinkColorOnHit::SetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_SetColor_mDE76A3DEDEC08394BBA8E2A90BACB6732EA9E3F1 (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_orthographicSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Camera::get_aspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BoundsCheck>()
inline BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean BoundsCheck::LocIs(BoundsCheck/eScreenLocs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_LocIs_mD7F85EF6E6B538E5584F40DA42B379A68D32EAF8 (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, int32_t ___0_checkLoc, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::PlayClipAtPoint(UnityEngine.AudioClip,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<BlinkColorOnHit>()
inline BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* Component_GetComponent_TisBlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_m1AF16B49556107508A403F09C4330522A69A198B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<EnemyShield>()
inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnemyShield::AddProtector(EnemyShield)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_AddProtector_m206969A7D4C5E37AE8BA46836A0D823F008AE14E (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* ___0_shieldChild, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EnemyShield>::Add(T)
inline void List_1_Add_m658D33C5F7E15D76CED73A8FD2A5AF9B0EA9049F_inline (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* __this, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E*, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<EnemyShield>::GetEnumerator()
inline Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7 List_1_GetEnumerator_mDA2954C333C064586DD3754F8FC204AFFA40EB2A (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7 (*) (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<EnemyShield>::Dispose()
inline void Enumerator_Dispose_m7427826656BC7807D1C4A54B30702E7F08C2F412 (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<EnemyShield>::get_Current()
inline EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* Enumerator_get_Current_m65EC7429B7BB9756C3AD7274D9A9FF1FFA8A3038_inline (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7* __this, const RuntimeMethod* method)
{
	return ((  EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* (*) (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean EnemyShield::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyShield_get_isActive_m8C900618C3CD641D0CC50BD472B86FA800F6171D (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, const RuntimeMethod* method) ;
// System.Single EnemyShield::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyShield_TakeDamage_m54ABC64DECB5BEE92EBA87FBC99E8F4515DFDF2B (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, float ___0_dmg, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<EnemyShield>::MoveNext()
inline bool Enumerator_MoveNext_m87251298324550CBEB9327F31E1F96E2B675731D (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void EnemyShield::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_set_isActive_m2638E17004262E4A28F9202481A6967C8D3CAAA0 (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<EnemyShield>::.ctor()
inline void List_1__ctor_mF65E0F244C569063C8227C929997311BDCD92FE2 (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void Enemy::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Move_mC9846B6F1E720BD702338E14556D69034C01C597 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B (const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Enemy_3::DrawDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_DrawDebug_m68B397F7D013813341A04B488A8B05EACAAF8287 (Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Utils::Bezier(System.Single,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_Bezier_m3D34A55E5AB2B7B134F19256768A9F277E3AD15A (float ___0_u, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_points, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_cyan()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, float ___3_duration, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<EnemyShield>()
inline EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* Component_GetComponentsInChildren_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m9BB0E787978B20C86A4513742E7A706D572AF78C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void Enemy_4::InitMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_InitMovement_mC34B18DEC2218C99E936619005ED004E777F2FF1 (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint[] UnityEngine.Collision::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ContactPoint::get_thisCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ContactPoint_get_thisCollider_m5CECC2F86CD3D73FE35543127C22C02D8ED1AFD6 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// UnityEngine.Collider UnityEngine.ContactPoint::get_otherCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ContactPoint_get_otherCollider_m717D0758D578C93C6CA26E2BA87325682B6C2550 (ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* __this, const RuntimeMethod* method) ;
// eWeaponType ProjectileHero::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProjectileHero_get_type_mE1099F28242EDD2CD8D8664A39F1115AC24230C5_inline (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) ;
// WeaponDefinition Main::GET_WEAPON_DEFINITION(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7 (int32_t ___0_wt, const RuntimeMethod* method) ;
// System.Void Main::SHIP_DESTROYED(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SHIP_DESTROYED_m9C81E9DAB504B845ABBEC2ECEF097872AB80954B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___0_e, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// Hero Hero::get_S()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* Hero_get_S_mA827398B6A611A0C6348416DF8ABD0AFA60EE437_inline (const RuntimeMethod* method) ;
// System.Void Hero::set_S(Hero)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hero_set_S_m2315DD9324673B58B7D28FE93F4D21D65D2F63AE_inline (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Hero::ClearWeapons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ClearWeapons_m1B822A3A6CD8B01557B0D3476E81F7DE870B490B (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) ;
// System.Void Weapon::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, int32_t ___0_wt, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void Hero/WeaponFireDelegate::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_inline (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Enemy>()
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<PowerUp>()
inline PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single Hero::get_shieldLevel()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529_inline (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) ;
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_mA06397BE3E6B2DADC9BF724BF3E8AEA9E381CEA0 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Hero::AbsorbPowerUp(PowerUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_AbsorbPowerUp_m16EC099CCBACE051E6680C210AA61EC5B3B2BF14 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* ___0_pUp, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// eWeaponType Weapon::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) ;
// Weapon Hero::GetEmptyWeaponSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* Hero_GetEmptyWeaponSlot_mE797D41618C097D8E88A24778421806568051427 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) ;
// System.Void PowerUp::AbsorbedBy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_AbsorbedBy_m31E65CC3771949BB81C93D06796A61FB386B0D11 (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void Main::HERO_DIED()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_HERO_DIED_m5CFF2573CB6FA1DF62B5765906D9375CF3FBEF1F (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, float ___1_time, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>::.ctor()
inline void Dictionary_2__ctor_m5942A5581CDDCC1437BCFF7D033CDF92F2FFC4C3 (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD471442CC105B43A365AEE91579F8D209FBD2276 (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* __this, int32_t ___0_key, WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64*, int32_t, WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6*, const RuntimeMethod*))Dictionary_2_set_Item_m78DDC81EE49FB9D4194E83685FFED445DFDB75CA_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// T UnityEngine.GameObject::GetComponent<BoundsCheck>()
inline BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void Main::DelayedRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_DelayedRestart_mD39AF81F74900F1FFE58F5DEE3C800C604039976 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m38B2AB172FB123A86BF8B779218FBC10B4D0C76B (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m874C59716993973F0A52C848B20C70C26DB9BCF7_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<eWeaponType,WeaponDefinition>::get_Item(TKey)
inline WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* Dictionary_2_get_Item_m78414832D5C786EC1E636FB219A2DBEFDAE244B4 (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* (*) (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m9C4302CCAE3C1BF70D02091D0E0CED7663F18211_gshared)(__this, ___0_key, method);
}
// System.Void WeaponDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponDefinition__ctor_m9FFFB87B0DA42A34FF39CC883DD46218D66F9F61 (WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* __this, const RuntimeMethod* method) ;
// System.Void PowerUp::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetType_m017B76E45A02D5E3996170C37D08721BD81E211E (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, int32_t ___0_wt, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshPro>()
inline TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void ProjectileHero::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_SetType_m2AC08B31BBB42C325E269FE5B9B7668FBFB347C2 (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, int32_t ___0_eType, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::LerpUnclamped(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.Renderer>()
inline RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m6F69570C0224EE6620FD43C4DDB0F0AB152A1B20_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<Hero>()
inline Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* Component_GetComponentInParent_TisHero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_mF3360EE369411FAD1664005F6A77A043F97BEF7F (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void Hero/WeaponFireDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate__ctor_mCCFC8971B19B02B9366A0A48BF122B57F4D387EB (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Hero::add_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_add_fireEvent_m92F4C1E6DAA87C8D4BA1A8A1B186C802EB761DD5 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// ProjectileHero Weapon::MakeProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) ;
// System.Void ProjectileHero::set_vel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Void ProjectileHero::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_set_type_m495C10F67A06D8DBAA3067F7153827E289026CBD (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BlinkColorOnHit::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_Awake_m5459806AE3EC168EA20D3F9CC3FE738141F6854A (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m20BFEEA4A374B3C291242E2053CAE8A8130334D8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// bndCheck = GetComponentInParent<BoundsCheck>();
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0;
		L_0 = Component_GetComponentInParent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m20BFEEA4A374B3C291242E2053CAE8A8130334D8(__this, Component_GetComponentInParent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m20BFEEA4A374B3C291242E2053CAE8A8130334D8_RuntimeMethod_var);
		__this->___bndCheck_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bndCheck_11), (void*)L_0);
		// materials = Utils.GetAllMaterials(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_2;
		L_2 = Utils_GetAllMaterials_m5CC13A89BE2CE0687D8C076E71CF34161510CFE6(L_1, NULL);
		__this->___materials_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materials_9), (void*)L_2);
		// originalColors = new Color[materials.Length];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = __this->___materials_9;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = (ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389*)SZArrayNew(ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)));
		__this->___originalColors_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalColors_10), (void*)L_4);
		// for(int i=0;i<materials.Length;i++){
		V_0 = 0;
		goto IL_0051;
	}

IL_0034:
	{
		// originalColors[i] = materials[i].color;
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_5 = __this->___originalColors_10;
		int32_t L_6 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_7 = __this->___materials_9;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		L_11 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_10, NULL);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_11);
		// for(int i=0;i<materials.Length;i++){
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0051:
	{
		// for(int i=0;i<materials.Length;i++){
		int32_t L_13 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_14 = __this->___materials_9;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0034;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_Update_mB68FAB9880B2E5546C70A651B3E1C0188529FC32 (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) 
{
	{
		// if(showingColor && Time.time > blinkCompleteTime) RevertColors();
		bool L_0 = __this->___showingColor_6;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___blinkCompleteTime_7;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_001b;
		}
	}
	{
		// if(showingColor && Time.time > blinkCompleteTime) RevertColors();
		BlinkColorOnHit_RevertColors_m2E1BA1D468EC81D34F7AFDF48B33AE21F54321BA(__this, NULL);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_OnCollisionEnter_mCFB0597C46FDF4C892750F33686604B13A0A883C (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_coll, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(ignoreOnCollisionEnter) return;
		bool L_0 = __this->___ignoreOnCollisionEnter_8;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if(ignoreOnCollisionEnter) return;
		return;
	}

IL_0009:
	{
		// ProjectileHero p = coll.gameObject.GetComponent<ProjectileHero>();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_1 = ___0_coll;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_1, NULL);
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_3;
		L_3 = GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD(L_2, GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		// if(p != null){
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// if(bndCheck != null && !bndCheck.isOnScreen){
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_5 = __this->___bndCheck_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_7 = __this->___bndCheck_11;
		bool L_8;
		L_8 = BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC(L_7, NULL);
		if (L_8)
		{
			goto IL_0038;
		}
	}
	{
		// return;
		return;
	}

IL_0038:
	{
		// SetColor();
		BlinkColorOnHit_SetColor_mDE76A3DEDEC08394BBA8E2A90BACB6732EA9E3F1(__this, NULL);
	}

IL_003e:
	{
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::SetColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_SetColor_mDE76A3DEDEC08394BBA8E2A90BACB6732EA9E3F1 (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(Material m in materials){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___materials_9;
		V_0 = L_0;
		V_1 = 0;
		goto IL_001c;
	}

IL_000b:
	{
		// foreach(Material m in materials){
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// m.color = blinkColor;
		il2cpp_codegen_runtime_class_init_inline(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ((BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var))->___blinkColor_5;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_5, NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001c:
	{
		// foreach(Material m in materials){
		int32_t L_7 = V_1;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// showingColor = true;
		__this->___showingColor_6 = (bool)1;
		// blinkCompleteTime = Time.time + blinkDuration;
		float L_9;
		L_9 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		il2cpp_codegen_runtime_class_init_inline(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var);
		float L_10 = ((BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var))->___blinkDuration_4;
		__this->___blinkCompleteTime_7 = ((float)il2cpp_codegen_add(L_9, L_10));
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::RevertColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit_RevertColors_m2E1BA1D468EC81D34F7AFDF48B33AE21F54321BA (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i=0; i<materials.Length; i++){
		V_0 = 0;
		goto IL_0021;
	}

IL_0004:
	{
		// materials[i].color = originalColors[i];
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_0 = __this->___materials_9;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_4 = __this->___originalColors_10;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_3, L_7, NULL);
		// for(int i=0; i<materials.Length; i++){
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0021:
	{
		// for(int i=0; i<materials.Length; i++){
		int32_t L_9 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_10 = __this->___materials_9;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// showingColor = false;
		__this->___showingColor_6 = (bool)0;
		// }
		return;
	}
}
// System.Void BlinkColorOnHit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit__ctor_m8D3FEC896E520D53EE15DA9D55CBDEEC4C08D363 (BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void BlinkColorOnHit::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlinkColorOnHit__cctor_mAF75050FF6B9C0DB6A77EE33DE62C302B932EEF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float blinkDuration = 0.1f;
		((BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var))->___blinkDuration_4 = (0.100000001f);
		// private static Color blinkColor = Color.red;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		((BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_StaticFields*)il2cpp_codegen_static_fields_for(BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_il2cpp_TypeInfo_var))->___blinkColor_5 = L_0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BoundsCheck::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_Awake_mEF422329B76307B7C586A79853A32E8DAFB19F08 (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, const RuntimeMethod* method) 
{
	{
		// camHeight = Camera.main.orthographicSize;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		float L_1;
		L_1 = Camera_get_orthographicSize_m7950C5627086253E02992A43ADFE59039DB473F8(L_0, NULL);
		__this->___camHeight_9 = L_1;
		// camWidth = camHeight * Camera.main.aspect;
		float L_2 = __this->___camHeight_9;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		float L_4;
		L_4 = Camera_get_aspect_m48BF8820EA2D55BE0D154BC5546819FB65BE257D(L_3, NULL);
		__this->___camWidth_8 = ((float)il2cpp_codegen_multiply(L_2, L_4));
		// }
		return;
	}
}
// System.Void BoundsCheck::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck_LateUpdate_m360F5EFE7EF0C3F52892DA1FD0197118A0DE43C2 (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float checkRadius = 0;
		V_0 = (0.0f);
		// if(boundsType == eType.inset) checkRadius = -radius;
		int32_t L_0 = __this->___boundsType_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// if(boundsType == eType.inset) checkRadius = -radius;
		float L_1 = __this->___radius_5;
		V_0 = ((-L_1));
	}

IL_0017:
	{
		// if(boundsType == eType.outset) checkRadius = radius;
		int32_t L_2 = __this->___boundsType_4;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		// if(boundsType == eType.outset) checkRadius = radius;
		float L_3 = __this->___radius_5;
		V_0 = L_3;
	}

IL_0027:
	{
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_1 = L_5;
		// screenLocs = eScreenLocs.onScreen;
		__this->___screenLocs_7 = 0;
		// if(pos.x > camWidth + checkRadius){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_1;
		float L_7 = L_6.___x_2;
		float L_8 = __this->___camWidth_8;
		float L_9 = V_0;
		if ((!(((float)L_7) > ((float)((float)il2cpp_codegen_add(L_8, L_9))))))
		{
			goto IL_0067;
		}
	}
	{
		// pos.x = camWidth + checkRadius;
		float L_10 = __this->___camWidth_8;
		float L_11 = V_0;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_add(L_10, L_11));
		// screenLocs |= eScreenLocs.offRight;
		int32_t L_12 = __this->___screenLocs_7;
		__this->___screenLocs_7 = ((int32_t)((int32_t)L_12|1));
	}

IL_0067:
	{
		// if(pos.x < -camWidth - checkRadius){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = L_13.___x_2;
		float L_15 = __this->___camWidth_8;
		float L_16 = V_0;
		if ((!(((float)L_14) < ((float)((float)il2cpp_codegen_subtract(((-L_15)), L_16))))))
		{
			goto IL_0096;
		}
	}
	{
		// pos.x = -camWidth - checkRadius;
		float L_17 = __this->___camWidth_8;
		float L_18 = V_0;
		(&V_1)->___x_2 = ((float)il2cpp_codegen_subtract(((-L_17)), L_18));
		// screenLocs |= eScreenLocs.offLeft;
		int32_t L_19 = __this->___screenLocs_7;
		__this->___screenLocs_7 = ((int32_t)((int32_t)L_19|2));
	}

IL_0096:
	{
		// if(pos.y > camHeight + checkRadius){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_1;
		float L_21 = L_20.___y_3;
		float L_22 = __this->___camHeight_9;
		float L_23 = V_0;
		if ((!(((float)L_21) > ((float)((float)il2cpp_codegen_add(L_22, L_23))))))
		{
			goto IL_00c3;
		}
	}
	{
		// pos.y = camHeight + checkRadius;
		float L_24 = __this->___camHeight_9;
		float L_25 = V_0;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_add(L_24, L_25));
		// screenLocs |= eScreenLocs.offUp;
		int32_t L_26 = __this->___screenLocs_7;
		__this->___screenLocs_7 = ((int32_t)((int32_t)L_26|4));
	}

IL_00c3:
	{
		// if(pos.y < -camHeight - checkRadius){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		float L_28 = L_27.___y_3;
		float L_29 = __this->___camHeight_9;
		float L_30 = V_0;
		if ((!(((float)L_28) < ((float)((float)il2cpp_codegen_subtract(((-L_29)), L_30))))))
		{
			goto IL_00f2;
		}
	}
	{
		// pos.y = -camHeight - checkRadius;
		float L_31 = __this->___camHeight_9;
		float L_32 = V_0;
		(&V_1)->___y_3 = ((float)il2cpp_codegen_subtract(((-L_31)), L_32));
		// screenLocs |= eScreenLocs.offDown;
		int32_t L_33 = __this->___screenLocs_7;
		__this->___screenLocs_7 = ((int32_t)((int32_t)L_33|8));
	}

IL_00f2:
	{
		// if(keepOnScreen && !isOnScreen){
		bool L_34 = __this->___keepOnScreen_6;
		if (!L_34)
		{
			goto IL_0115;
		}
	}
	{
		bool L_35;
		L_35 = BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC(__this, NULL);
		if (L_35)
		{
			goto IL_0115;
		}
	}
	{
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = V_1;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_37, NULL);
		// screenLocs = eScreenLocs.onScreen;
		__this->___screenLocs_7 = 0;
	}

IL_0115:
	{
		// }
		return;
	}
}
// System.Boolean BoundsCheck::get_isOnScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, const RuntimeMethod* method) 
{
	{
		// get{return (screenLocs == eScreenLocs.onScreen);}
		int32_t L_0 = __this->___screenLocs_7;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean BoundsCheck::LocIs(BoundsCheck/eScreenLocs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsCheck_LocIs_mD7F85EF6E6B538E5584F40DA42B379A68D32EAF8 (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, int32_t ___0_checkLoc, const RuntimeMethod* method) 
{
	{
		// if (checkLoc == eScreenLocs.onScreen)return isOnScreen;
		int32_t L_0 = ___0_checkLoc;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// if (checkLoc == eScreenLocs.onScreen)return isOnScreen;
		bool L_1;
		L_1 = BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC(__this, NULL);
		return L_1;
	}

IL_000a:
	{
		// return((screenLocs & checkLoc) == checkLoc);
		int32_t L_2 = __this->___screenLocs_7;
		int32_t L_3 = ___0_checkLoc;
		int32_t L_4 = ___0_checkLoc;
		return (bool)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)L_3))) == ((int32_t)L_4))? 1 : 0);
	}
}
// System.Void BoundsCheck::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsCheck__ctor_m2B113074A041060F4F73AE365C11E463F7FD1E59 (BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* __this, const RuntimeMethod* method) 
{
	{
		// public float radius = 1f;
		__this->___radius_5 = (1.0f);
		// public bool keepOnScreen = true;
		__this->___keepOnScreen_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Awake_mB58E74200229275689E6D9ADCDB6443D4E426624 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A(__this, Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		__this->___bndCheck_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bndCheck_11), (void*)L_0);
		// }
		return;
	}
}
// UnityEngine.Vector3 Enemy::get_pos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// return this.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		return L_1;
	}
}
// System.Void Enemy::set_pos(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// this.transform.position = value;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4149CFC3AC081AF0D654D9BDB6BC9B5540CE03D8 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Move();
		VirtualActionInvoker0::Invoke(4 /* System.Void Enemy::Move() */, __this);
		// if(bndCheck.LocIs(BoundsCheck.eScreenLocs.offDown)){
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0 = __this->___bndCheck_11;
		bool L_1;
		L_1 = BoundsCheck_LocIs_mD7F85EF6E6B538E5584F40DA42B379A68D32EAF8(L_0, 8, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Enemy::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Move_mC9846B6F1E720BD702338E14556D69034C01C597 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 tempPos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		V_0 = L_0;
		// tempPos.y -= speed * Time.deltaTime;
		float* L_1 = (float*)(&(&V_0)->___y_3);
		float* L_2 = L_1;
		float L_3 = *((float*)L_2);
		float L_4 = __this->___speed_4;
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_2) = (float)((float)il2cpp_codegen_subtract(L_3, ((float)il2cpp_codegen_multiply(L_4, L_5))));
		// pos = tempPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_mA8E3F644B8068B1BA5496C6AD2E43A65EBA978DB (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_coll, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject otherGO = coll.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_coll;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// if (otherGO.GetComponent<ProjectileHero>() != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_3;
		L_3 = GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD(L_2, GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// if (destroySound != null)
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___destroySound_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0039;
		}
	}
	{
		// AudioSource.PlayClipAtPoint(destroySound, transform.position);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->___destroySound_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		AudioSource_PlayClipAtPoint_mA78328A70D3F1088B588EF6F811AAD6577F2B7BF(L_7, L_9, NULL);
	}

IL_0039:
	{
		// Destroy(otherGO);  // Destroy the projectile
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_10, NULL);
		// Destroy(gameObject); // Destroy this enemy
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		return;
	}

IL_004b:
	{
		// Debug.Log("Enemy hit by non-ProjectileHero: " + otherGO.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		String_t* L_13;
		L_13 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_12, NULL);
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral0C6050880675B7CD06D38D2E5E336DCA6E5C6270, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_14, NULL);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 10f;
		__this->___speed_4 = (10.0f);
		// public float fireRate = 0.3f;
		__this->___fireRate_5 = (0.300000012f);
		// public float health = 10;
		__this->___health_6 = (10.0f);
		// public int score = 100;
		__this->___score_7 = ((int32_t)100);
		// public float powerUpDropChance = 1f;
		__this->___powerUpDropChance_8 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EnemyShield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_Start_m3BFDB8AFFCE1C5FCDC38BCC9AEF01F0B508D7DF9 (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_m1AF16B49556107508A403F09C4330522A69A198B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* V_0 = NULL;
	{
		// blinker = GetComponent<BlinkColorOnHit>();
		BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* L_0;
		L_0 = Component_GetComponent_TisBlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_m1AF16B49556107508A403F09C4330522A69A198B(__this, Component_GetComponent_TisBlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC_m1AF16B49556107508A403F09C4330522A69A198B_RuntimeMethod_var);
		__this->___blinker_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___blinker_6), (void*)L_0);
		// blinker.ignoreOnCollisionEnter = true;
		BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* L_1 = __this->___blinker_6;
		L_1->___ignoreOnCollisionEnter_8 = (bool)1;
		// if(transform.parent == null) return;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// if(transform.parent == null) return;
		return;
	}

IL_002c:
	{
		// EnemyShield shieldParent = transform.parent.GetComponent<EnemyShield>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_7;
		L_7 = Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F(L_6, Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F_RuntimeMethod_var);
		V_0 = L_7;
		// if(shieldParent != null){
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_004d;
		}
	}
	{
		// shieldParent.AddProtector(this);
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_10 = V_0;
		EnemyShield_AddProtector_m206969A7D4C5E37AE8BA46836A0D823F008AE14E(L_10, __this, NULL);
	}

IL_004d:
	{
		// }
		return;
	}
}
// System.Void EnemyShield::AddProtector(EnemyShield)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_AddProtector_m206969A7D4C5E37AE8BA46836A0D823F008AE14E (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* ___0_shieldChild, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m658D33C5F7E15D76CED73A8FD2A5AF9B0EA9049F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protectors.Add(shieldChild);
		List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* L_0 = __this->___protectors_5;
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_1 = ___0_shieldChild;
		List_1_Add_m658D33C5F7E15D76CED73A8FD2A5AF9B0EA9049F_inline(L_0, L_1, List_1_Add_m658D33C5F7E15D76CED73A8FD2A5AF9B0EA9049F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean EnemyShield::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EnemyShield_get_isActive_m8C900618C3CD641D0CC50BD472B86FA800F6171D (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, const RuntimeMethod* method) 
{
	{
		// get{return gameObject.activeInHierarchy;}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		return L_1;
	}
}
// System.Void EnemyShield::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_set_isActive_m2638E17004262E4A28F9202481A6967C8D3CAAA0 (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// private set{gameObject.SetActive(value);}
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1 = ___0_value;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// private set{gameObject.SetActive(value);}
		return;
	}
}
// System.Single EnemyShield::TakeDamage(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float EnemyShield_TakeDamage_m54ABC64DECB5BEE92EBA87FBC99E8F4515DFDF2B (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, float ___0_dmg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7427826656BC7807D1C4A54B30702E7F08C2F412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m87251298324550CBEB9327F31E1F96E2B675731D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65EC7429B7BB9756C3AD7274D9A9FF1FFA8A3038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mDA2954C333C064586DD3754F8FC204AFFA40EB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// foreach(EnemyShield es in protectors){
		List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* L_0 = __this->___protectors_5;
		Enumerator_tC7653E5EEE0FDCDD99EB96BEC433C2CD48F3E3A7 L_1;
		L_1 = List_1_GetEnumerator_mDA2954C333C064586DD3754F8FC204AFFA40EB2A(L_0, List_1_GetEnumerator_mDA2954C333C064586DD3754F8FC204AFFA40EB2A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0042:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7427826656BC7807D1C4A54B30702E7F08C2F412((&V_0), Enumerator_Dispose_m7427826656BC7807D1C4A54B30702E7F08C2F412_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0037_1;
			}

IL_000e_1:
			{
				// foreach(EnemyShield es in protectors){
				EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_2;
				L_2 = Enumerator_get_Current_m65EC7429B7BB9756C3AD7274D9A9FF1FFA8A3038_inline((&V_0), Enumerator_get_Current_m65EC7429B7BB9756C3AD7274D9A9FF1FFA8A3038_RuntimeMethod_var);
				V_1 = L_2;
				// if(es.isActive){
				EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_3 = V_1;
				bool L_4;
				L_4 = EnemyShield_get_isActive_m8C900618C3CD641D0CC50BD472B86FA800F6171D(L_3, NULL);
				if (!L_4)
				{
					goto IL_0037_1;
				}
			}
			{
				// dmg = es.TakeDamage(dmg);
				EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_5 = V_1;
				float L_6 = ___0_dmg;
				float L_7;
				L_7 = EnemyShield_TakeDamage_m54ABC64DECB5BEE92EBA87FBC99E8F4515DFDF2B(L_5, L_6, NULL);
				___0_dmg = L_7;
				// if(dmg == 0) return 0;
				float L_8 = ___0_dmg;
				if ((!(((float)L_8) == ((float)(0.0f)))))
				{
					goto IL_0037_1;
				}
			}
			{
				// if(dmg == 0) return 0;
				V_2 = (0.0f);
				goto IL_008b;
			}

IL_0037_1:
			{
				// foreach(EnemyShield es in protectors){
				bool L_9;
				L_9 = Enumerator_MoveNext_m87251298324550CBEB9327F31E1F96E2B675731D((&V_0), Enumerator_MoveNext_m87251298324550CBEB9327F31E1F96E2B675731D_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// blinker.SetColor();
		BlinkColorOnHit_tD5D3762997108532798963CECBD60F8CCBC70BFC* L_10 = __this->___blinker_6;
		BlinkColorOnHit_SetColor_mDE76A3DEDEC08394BBA8E2A90BACB6732EA9E3F1(L_10, NULL);
		// health -= dmg;
		float L_11 = __this->___health_4;
		float L_12 = ___0_dmg;
		__this->___health_4 = ((float)il2cpp_codegen_subtract(L_11, L_12));
		// if(health <= 0){
		float L_13 = __this->___health_4;
		if ((!(((float)L_13) <= ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// isActive = false;
		EnemyShield_set_isActive_m2638E17004262E4A28F9202481A6967C8D3CAAA0(__this, (bool)0, NULL);
		// return -health;
		float L_14 = __this->___health_4;
		return ((-L_14));
	}

IL_0085:
	{
		// return 0;
		return (0.0f);
	}

IL_008b:
	{
		// }
		float L_15 = V_2;
		return L_15;
	}
}
// System.Void EnemyShield::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield_Update_m1E79A57240126A6522F13FDB5641753C73907170 (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnemyShield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyShield__ctor_mFAFE1CBEADD0C58BB99358518B7520D1AB29765A (EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF65E0F244C569063C8227C929997311BDCD92FE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float health = 10;
		__this->___health_4 = (10.0f);
		// private List<EnemyShield> protectors = new List<EnemyShield>();
		List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E* L_0 = (List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E*)il2cpp_codegen_object_new(List_1_t64E4931623862A6C3B619E07F7EB4F91514F5F5E_il2cpp_TypeInfo_var);
		List_1__ctor_mF65E0F244C569063C8227C929997311BDCD92FE2(L_0, List_1__ctor_mF65E0F244C569063C8227C929997311BDCD92FE2_RuntimeMethod_var);
		__this->___protectors_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___protectors_5), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_0__ctor_mFC7145E0147FF7BE8821709DE52F16D69973D22F (Enemy_0_t8147A7FB8C07B25DA3FFCC5330F18064F4FDC820* __this, const RuntimeMethod* method) 
{
	{
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy_1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1_Start_mF8FFF09D6AF40195B65FD2CDAB3BDB4D82F786E6 (Enemy_1_tF4D9D79CFE4DE8CF8B3AA54DF5C113143F4560E9* __this, const RuntimeMethod* method) 
{
	{
		// x0 = pos.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		float L_1 = L_0.___x_2;
		__this->___x0_15 = L_1;
		// birthTime = Time.time;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___birthTime_16 = L_2;
		// }
		return;
	}
}
// System.Void Enemy_1::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1_Move_mB36243A109927B2489E035BAD2D3F7A99811EE2B (Enemy_1_tF4D9D79CFE4DE8CF8B3AA54DF5C113143F4560E9* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 tempPos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		V_0 = L_0;
		// float age = Time.time - birthTime;
		float L_1;
		L_1 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_2 = __this->___birthTime_16;
		V_1 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// float theta = Mathf.PI * 2 * age / waveFrequency;
		float L_3 = V_1;
		float L_4 = __this->___waveFrequency_12;
		// float sin = Mathf.Sin(theta);
		float L_5;
		L_5 = sinf(((float)(((float)il2cpp_codegen_multiply((6.28318548f), L_3))/L_4)));
		V_2 = L_5;
		// tempPos.x = x0 + waveWidth * sin;
		float L_6 = __this->___x0_15;
		float L_7 = __this->___waveWidth_13;
		float L_8 = V_2;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, L_8))));
		// pos = tempPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762(__this, L_9, NULL);
		// Vector3 rot = new Vector3(0, sin * waveRotY, 0);
		float L_10 = V_2;
		float L_11 = __this->___waveRotY_14;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_3), (0.0f), ((float)il2cpp_codegen_multiply(L_10, L_11)), (0.0f), NULL);
		// this.transform.rotation = Quaternion.Euler(rot);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_13, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// base.Move();
		Enemy_Move_mC9846B6F1E720BD702338E14556D69034C01C597(__this, NULL);
		// }
		return;
	}
}
// System.Void Enemy_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_1__ctor_mD3CFC786B9B1E9414F56B85521A4AE4FC9F100B3 (Enemy_1_tF4D9D79CFE4DE8CF8B3AA54DF5C113143F4560E9* __this, const RuntimeMethod* method) 
{
	{
		// public float waveFrequency = 2;
		__this->___waveFrequency_12 = (2.0f);
		// public float waveWidth = 4;
		__this->___waveWidth_13 = (4.0f);
		// public float waveRotY = 45;
		__this->___waveRotY_14 = (45.0f);
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy_2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2_Start_mD8F2CDD064B157E6EF7F5B2EF204FBFC056D78E1 (Enemy_2_t5B12C02BD16077BC1CDA462474C1909A8E92EED4* __this, const RuntimeMethod* method) 
{
	{
		// p0 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___p0_17 = L_0;
		// p0.x = -bndCheck.camWidth - bndCheck.radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_17);
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_2 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_3 = L_2->___camWidth_8;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_4 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_5 = L_4->___radius_5;
		L_1->___x_2 = ((float)il2cpp_codegen_subtract(((-L_3)), L_5));
		// p0.y = Random.Range(-bndCheck.camHeight, bndCheck.camHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_17);
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_7 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_8 = L_7->___camHeight_9;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_9 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_10 = L_9->___camHeight_9;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_8)), L_10, NULL);
		L_6->___y_3 = L_11;
		// p1 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___p1_18 = L_12;
		// p1.x = bndCheck.camWidth + bndCheck.radius;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_18);
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_14 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_15 = L_14->___camWidth_8;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_16 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_17 = L_16->___radius_5;
		L_13->___x_2 = ((float)il2cpp_codegen_add(L_15, L_17));
		// p1.y = Random.Range(-bndCheck.camHeight, bndCheck.camHeight);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_18 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_18);
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_19 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_20 = L_19->___camHeight_9;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_21 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_22 = L_21->___camHeight_9;
		float L_23;
		L_23 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_20)), L_22, NULL);
		L_18->___y_3 = L_23;
		// if(Random.value > 0.5f){
		float L_24;
		L_24 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		if ((!(((float)L_24) > ((float)(0.5f)))))
		{
			goto IL_00dd;
		}
	}
	{
		// p0.x *= -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_17);
		float* L_26 = (float*)(&L_25->___x_2);
		float* L_27 = L_26;
		float L_28 = *((float*)L_27);
		*((float*)L_27) = (float)((float)il2cpp_codegen_multiply(L_28, (-1.0f)));
		// p1.x *= -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_29 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_18);
		float* L_30 = (float*)(&L_29->___x_2);
		float* L_31 = L_30;
		float L_32 = *((float*)L_31);
		*((float*)L_31) = (float)((float)il2cpp_codegen_multiply(L_32, (-1.0f)));
	}

IL_00dd:
	{
		// birthTime = Time.time;
		float L_33;
		L_33 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___birthTime_15 = L_33;
		// }
		return;
	}
}
// System.Void Enemy_2::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2_Move_mD5AE668C85FC41B6B093F3513281C1508B6E9C6B (Enemy_2_t5B12C02BD16077BC1CDA462474C1909A8E92EED4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float u = (Time.time - birthTime)/lifeTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___birthTime_15;
		float L_2 = __this->___lifeTime_12;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// if(u>1){
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// float shipRot = rotCurve.Evaluate(u)*360;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = __this->___rotCurve_14;
		float L_6 = V_0;
		float L_7;
		L_7 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_5, L_6, NULL);
		V_1 = ((float)il2cpp_codegen_multiply(L_7, (360.0f)));
		// transform.rotation = baseRotation * Quaternion.Euler(-shipRot, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = __this->___baseRotation_16;
		float L_10 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((-L_10)), (0.0f), (0.0f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_9, L_11, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_12, NULL);
		// u = u + sinEccentricity*(Mathf.Sin(u*Mathf.PI*2));
		float L_13 = V_0;
		float L_14 = __this->___sinEccentricity_13;
		float L_15 = V_0;
		float L_16;
		L_16 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_15, (3.14159274f))), (2.0f))));
		V_0 = ((float)il2cpp_codegen_add(L_13, ((float)il2cpp_codegen_multiply(L_14, L_16))));
		// pos = (1-u)*p0 + u*p1;
		float L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___p0_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_17)), L_18, NULL);
		float L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___p1_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_20, L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_19, L_22, NULL);
		Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762(__this, L_23, NULL);
		// }
		return;
	}
}
// System.Void Enemy_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_2__ctor_m23E6746A4027EF4C910F14DFF3BEAC95B9BAE759 (Enemy_2_t5B12C02BD16077BC1CDA462474C1909A8E92EED4* __this, const RuntimeMethod* method) 
{
	{
		// public float lifeTime = 10;
		__this->___lifeTime_12 = (10.0f);
		// public float sinEccentricity = 0.6f;
		__this->___sinEccentricity_13 = (0.600000024f);
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy_3::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_Start_m5B7F7BFA753F443BF25640E41C6FD2FBB22E9AD6 (Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// points = new Vector3[3];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->___points_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_15), (void*)L_0);
		// points[0] = pos;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_2);
		// float xMin = -bndCheck.camWidth + bndCheck.radius;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_4 = L_3->___camWidth_8;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_5 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_6 = L_5->___radius_5;
		V_0 = ((float)il2cpp_codegen_add(((-L_4)), L_6));
		// float xMax = bndCheck.camWidth - bndCheck.radius;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_7 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_8 = L_7->___camWidth_8;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_9 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_10 = L_9->___radius_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_8, L_10));
		// points[1] = Vector3.zero;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_12);
		// points[1].x = Random.Range(xMin, xMax);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = __this->___points_15;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_14, L_15, NULL);
		((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___x_2 = L_16;
		// float midYMult = Random.Range(midpointYRange[0], midpointYRange[1]);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___midpointYRange_13);
		float L_18;
		L_18 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_17, 0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___midpointYRange_13);
		float L_20;
		L_20 = Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline(L_19, 1, NULL);
		float L_21;
		L_21 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_18, L_20, NULL);
		V_2 = L_21;
		// points[1].y = -bndCheck.camHeight * midYMult;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___points_15;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_23 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_24 = L_23->___camHeight_9;
		float L_25 = V_2;
		((L_22)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(1)))->___y_3 = ((float)il2cpp_codegen_multiply(((-L_24)), L_25));
		// points[2] = Vector3.zero;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		(L_26)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_27);
		// points[2].y = pos.y;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		float L_30 = L_29.___y_3;
		((L_28)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___y_3 = L_30;
		// points[2].x = Random.Range(xMin, xMax);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = __this->___points_15;
		float L_32 = V_0;
		float L_33 = V_1;
		float L_34;
		L_34 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_32, L_33, NULL);
		((L_31)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(2)))->___x_2 = L_34;
		// birthTime = Time.time;
		float L_35;
		L_35 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___birthTime_16 = L_35;
		// if(drawDebugInfo) DrawDebug();
		bool L_36 = __this->___drawDebugInfo_14;
		if (!L_36)
		{
			goto IL_0113;
		}
	}
	{
		// if(drawDebugInfo) DrawDebug();
		Enemy_3_DrawDebug_m68B397F7D013813341A04B488A8B05EACAAF8287(__this, NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void Enemy_3::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_Move_mE467C892D69FBACAEE829181D62A0B4C16D08DC1 (Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float u = (Time.time - birthTime)/lifeTime;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___birthTime_16;
		float L_2 = __this->___lifeTime_12;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// if(u>1){
		float L_3 = V_0;
		if ((!(((float)L_3) > ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_4, NULL);
		// return;
		return;
	}

IL_0028:
	{
		// transform.rotation = Quaternion.Euler(u*180,0,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_6 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(L_6, (180.0f))), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_5, L_7, NULL);
		// pos = Utils.Bezier(u,points);
		float L_8 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_9 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Utils_Bezier_m3D34A55E5AB2B7B134F19256768A9F277E3AD15A(L_8, L_9, NULL);
		Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Enemy_3::DrawDebug()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3_DrawDebug_m68B397F7D013813341A04B488A8B05EACAAF8287 (Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// Debug.DrawLine(points[0], points[1], Color.cyan, lifeTime);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = __this->___points_15;
		int32_t L_1 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___points_15;
		int32_t L_4 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		float L_7 = __this->___lifeTime_12;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_2, L_5, L_6, L_7, NULL);
		// Debug.DrawLine(points[1], points[2], Color.yellow, lifeTime);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = __this->___points_15;
		int32_t L_9 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_11 = __this->___points_15;
		int32_t L_12 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		float L_15 = __this->___lifeTime_12;
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_10, L_13, L_14, L_15, NULL);
		// float numSections = 20;
		V_0 = (20.0f);
		// Vector3 prevPoint = points[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = __this->___points_15;
		int32_t L_17 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (L_16)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		V_1 = L_18;
		// for(int i=1; i<numSections; i++){
		V_4 = 1;
		goto IL_00a5;
	}

IL_0068:
	{
		// float u = i/numSections;
		int32_t L_19 = V_4;
		float L_20 = V_0;
		V_5 = ((float)(((float)L_19)/L_20));
		// pt = Utils.Bezier(u,points);
		float L_21 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_22 = __this->___points_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Utils_Bezier_m3D34A55E5AB2B7B134F19256768A9F277E3AD15A(L_21, L_22, NULL);
		V_3 = L_23;
		// col = Color.Lerp(Color.cyan, Color.yellow, u);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline(NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		float L_26 = V_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_24, L_25, L_26, NULL);
		V_2 = L_27;
		// Debug.DrawLine(prevPoint, pt, col, lifeTime);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_2;
		float L_31 = __this->___lifeTime_12;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawLine_m796C039D0BD9962E19368C08CE76E8257DD45C5F(L_28, L_29, L_30, L_31, NULL);
		// prevPoint = pt;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		V_1 = L_32;
		// for(int i=1; i<numSections; i++){
		int32_t L_33 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00a5:
	{
		// for(int i=1; i<numSections; i++){
		int32_t L_34 = V_4;
		float L_35 = V_0;
		if ((((float)((float)L_34)) < ((float)L_35)))
		{
			goto IL_0068;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Enemy_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_3__ctor_mAACEEF0C8C5488BA49B141A18CF01A842788708B (Enemy_3_tCD036DB8D7D21E760E3628CA0E2C4F5048CCDFF0* __this, const RuntimeMethod* method) 
{
	{
		// public float lifeTime = 5;
		__this->___lifeTime_12 = (5.0f);
		// public Vector3 midpointYRange = new Vector2(1.5f, 3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1.5f), (3.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_0, NULL);
		__this->___midpointYRange_13 = L_1;
		// public bool drawDebugInfo = true;
		__this->___drawDebugInfo_14 = (bool)1;
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Enemy_4::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_Start_mA95BAABBFC5EE1FA247E330C6FDCB7AE3F07FFAD (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m9BB0E787978B20C86A4513742E7A706D572AF78C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// allShields = GetComponentsInChildren<EnemyShield>();
		EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* L_0;
		L_0 = Component_GetComponentsInChildren_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m9BB0E787978B20C86A4513742E7A706D572AF78C(__this, Component_GetComponentsInChildren_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m9BB0E787978B20C86A4513742E7A706D572AF78C_RuntimeMethod_var);
		__this->___allShields_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allShields_13), (void*)L_0);
		// thisShield = GetComponent<EnemyShield>();
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_1;
		L_1 = Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F(__this, Component_GetComponent_TisEnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD_m60C048AF766398539C05FFC87D7AE4280F2BE23F_RuntimeMethod_var);
		__this->___thisShield_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___thisShield_14), (void*)L_1);
		// p0 = p1 = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Enemy_get_pos_mDBC4E8473067C4EA46ED6CB891F02283126CDC32(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2;
		V_0 = L_3;
		__this->___p1_16 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		__this->___p0_15 = L_4;
		// InitMovement();
		Enemy_4_InitMovement_mC34B18DEC2218C99E936619005ED004E777F2FF1(__this, NULL);
		// }
		return;
	}
}
// System.Void Enemy_4::InitMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_InitMovement_mC34B18DEC2218C99E936619005ED004E777F2FF1 (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// p0 = p1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___p1_16;
		__this->___p0_15 = L_0;
		// float widMinRad = bndCheck.camWidth - bndCheck.radius;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_1 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_2 = L_1->___camWidth_8;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_3 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_4 = L_3->___radius_5;
		V_0 = ((float)il2cpp_codegen_subtract(L_2, L_4));
		// float hgtMinRad = bndCheck.camHeight - bndCheck.radius;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_5 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_6 = L_5->___camHeight_9;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_7 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		float L_8 = L_7->___radius_5;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_8));
		// p1.x = Random.Range(-widMinRad, widMinRad);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float L_10 = V_0;
		float L_11 = V_0;
		float L_12;
		L_12 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_10)), L_11, NULL);
		L_9->___x_2 = L_12;
		// p1.y = Random.Range(-hgtMinRad, hgtMinRad);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_13 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16;
		L_16 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(((-L_14)), L_15, NULL);
		L_13->___y_3 = L_16;
		// if(p0.x * p1.x > 0 && p0.y * p1.y > 0){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_15);
		float L_18 = L_17->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_19 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float L_20 = L_19->___x_2;
		if ((!(((float)((float)il2cpp_codegen_multiply(L_18, L_20))) > ((float)(0.0f)))))
		{
			goto IL_00ea;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_21 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_15);
		float L_22 = L_21->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_23 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float L_24 = L_23->___y_3;
		if ((!(((float)((float)il2cpp_codegen_multiply(L_22, L_24))) > ((float)(0.0f)))))
		{
			goto IL_00ea;
		}
	}
	{
		// if(Mathf.Abs(p0.x) > Mathf.Abs(p0.y)){
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_15);
		float L_26 = L_25->___x_2;
		float L_27;
		L_27 = fabsf(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p0_15);
		float L_29 = L_28->___y_3;
		float L_30;
		L_30 = fabsf(L_29);
		if ((!(((float)L_27) > ((float)L_30))))
		{
			goto IL_00d6;
		}
	}
	{
		// p1.x *= -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float* L_32 = (float*)(&L_31->___x_2);
		float* L_33 = L_32;
		float L_34 = *((float*)L_33);
		*((float*)L_33) = (float)((float)il2cpp_codegen_multiply(L_34, (-1.0f)));
		goto IL_00ea;
	}

IL_00d6:
	{
		// p1.y *= -1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_35 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)(&__this->___p1_16);
		float* L_36 = (float*)(&L_35->___y_3);
		float* L_37 = L_36;
		float L_38 = *((float*)L_37);
		*((float*)L_37) = (float)((float)il2cpp_codegen_multiply(L_38, (-1.0f)));
	}

IL_00ea:
	{
		// timeStart = Time.time;
		float L_39;
		L_39 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___timeStart_17 = L_39;
		// }
		return;
	}
}
// System.Void Enemy_4::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_Move_mA70E8510244BD4AFAB89F53FC66548CCAECE2596 (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float u = (Time.time -timeStart) /duration;
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___timeStart_17;
		float L_2 = __this->___duration_12;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/L_2));
		// if(u >=1){
		float L_3 = V_0;
		if ((!(((float)L_3) >= ((float)(1.0f)))))
		{
			goto IL_0028;
		}
	}
	{
		// InitMovement();
		Enemy_4_InitMovement_mC34B18DEC2218C99E936619005ED004E777F2FF1(__this, NULL);
		// u=0;
		V_0 = (0.0f);
	}

IL_0028:
	{
		// u = u - 0.15f * Mathf.Sin(u*2*Mathf.PI);
		float L_4 = V_0;
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_5, (2.0f))), (3.14159274f))));
		V_0 = ((float)il2cpp_codegen_subtract(L_4, ((float)il2cpp_codegen_multiply((0.150000006f), L_6))));
		// pos = (1-u)*p0 + u*p1;
		float L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___p0_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_7)), L_8, NULL);
		float L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___p1_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_10, L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_9, L_12, NULL);
		Enemy_set_pos_m7DF5806ADB5012A9823738057BA3D0CDBFD7B762(__this, L_13, NULL);
		// }
		return;
	}
}
// System.Void Enemy_4::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_OnCollisionEnter_m165D46F076C9367EDCE59A692DFA422862A7C6B0 (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___0_coll, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC28AEFE68EA3311DBDA6C62162FEF737EBDC9EE2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	float V_3 = 0.0f;
	bool V_4 = false;
	EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* V_5 = NULL;
	int32_t V_6 = 0;
	EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* V_7 = NULL;
	{
		// GameObject otherGO = coll.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___0_coll;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		V_0 = L_1;
		// ProjectileHero p = otherGO.GetComponent<ProjectileHero>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_3;
		L_3 = GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD(L_2, GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		V_1 = L_3;
		// if(p != null){
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_4 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00f8;
		}
	}
	{
		// Destroy(otherGO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_6, NULL);
		// if(bndCheck.isOnScreen){
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_7 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___bndCheck_11;
		bool L_8;
		L_8 = BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC(L_7, NULL);
		if (!L_8)
		{
			goto IL_010d;
		}
	}
	{
		// GameObject hitGO = coll.contacts[0].thisCollider.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_9 = ___0_coll;
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_10;
		L_10 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_9, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_11;
		L_11 = ContactPoint_get_thisCollider_m5CECC2F86CD3D73FE35543127C22C02D8ED1AFD6(((L_10)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_11, NULL);
		V_2 = L_12;
		// if(hitGO == otherGO){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, L_14, NULL);
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// hitGO = coll.contacts[0].otherCollider.gameObject;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_16 = ___0_coll;
		ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* L_17;
		L_17 = Collision_get_contacts_m2E8E27E0399230DFA4303A4F4D81C1BD55CBC473(L_16, NULL);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_18;
		L_18 = ContactPoint_get_otherCollider_m717D0758D578C93C6CA26E2BA87325682B6C2550(((L_17)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(0))), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		V_2 = L_19;
	}

IL_0067:
	{
		// float dmg = Main.GET_WEAPON_DEFINITION(p.type).damageOnHit;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_20 = V_1;
		int32_t L_21;
		L_21 = ProjectileHero_get_type_mE1099F28242EDD2CD8D8664A39F1115AC24230C5_inline(L_20, NULL);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_22;
		L_22 = Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7(L_21, NULL);
		float L_23 = L_22->___damageOnHit_6;
		V_3 = L_23;
		// bool shieldFound = false;
		V_4 = (bool)0;
		// foreach(EnemyShield es in allShields){
		EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* L_24 = __this->___allShields_13;
		V_5 = L_24;
		V_6 = 0;
		goto IL_00b0;
	}

IL_0088:
	{
		// foreach(EnemyShield es in allShields){
		EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* L_25 = V_5;
		int32_t L_26 = V_6;
		int32_t L_27 = L_26;
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		V_7 = L_28;
		// if(es.gameObject == hitGO){
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_29 = V_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30;
		L_30 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_29, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// es.TakeDamage(dmg);
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_33 = V_7;
		float L_34 = V_3;
		float L_35;
		L_35 = EnemyShield_TakeDamage_m54ABC64DECB5BEE92EBA87FBC99E8F4515DFDF2B(L_33, L_34, NULL);
		// shieldFound = true;
		V_4 = (bool)1;
	}

IL_00aa:
	{
		int32_t L_36 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00b0:
	{
		// foreach(EnemyShield es in allShields){
		int32_t L_37 = V_6;
		EnemyShieldU5BU5D_t756FE0D7318286D26553A86BC24009037ACE9B88* L_38 = V_5;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0088;
		}
	}
	{
		// if(!shieldFound) thisShield.TakeDamage(dmg);
		bool L_39 = V_4;
		if (L_39)
		{
			goto IL_00c9;
		}
	}
	{
		// if(!shieldFound) thisShield.TakeDamage(dmg);
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_40 = __this->___thisShield_14;
		float L_41 = V_3;
		float L_42;
		L_42 = EnemyShield_TakeDamage_m54ABC64DECB5BEE92EBA87FBC99E8F4515DFDF2B(L_40, L_41, NULL);
	}

IL_00c9:
	{
		// if(thisShield.isActive) return;
		EnemyShield_tC90545247EF47DDCC8ABDC1567330E29130C40CD* L_43 = __this->___thisShield_14;
		bool L_44;
		L_44 = EnemyShield_get_isActive_m8C900618C3CD641D0CC50BD472B86FA800F6171D(L_43, NULL);
		if (!L_44)
		{
			goto IL_00d7;
		}
	}
	{
		// if(thisShield.isActive) return;
		return;
	}

IL_00d7:
	{
		// if(!calledShipDestroyed){
		bool L_45 = ((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___calledShipDestroyed_10;
		if (L_45)
		{
			goto IL_00ec;
		}
	}
	{
		// Main.SHIP_DESTROYED(this);
		Main_SHIP_DESTROYED_m9C81E9DAB504B845ABBEC2ECEF097872AB80954B(__this, NULL);
		// calledShipDestroyed = true;
		((Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*)__this)->___calledShipDestroyed_10 = (bool)1;
	}

IL_00ec:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_46, NULL);
		return;
	}

IL_00f8:
	{
		// Debug.Log("Enemy_4 hit by non-ProjectileHero: " + otherGO.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = V_0;
		String_t* L_48;
		L_48 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_47, NULL);
		String_t* L_49;
		L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralC28AEFE68EA3311DBDA6C62162FEF737EBDC9EE2, L_48, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_49, NULL);
	}

IL_010d:
	{
		// }
		return;
	}
}
// System.Void Enemy_4::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4_Update_m8B9E27C29850233959E95D69EBF84BC1FE6BBDD3 (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) 
{
	{
		// Move();
		VirtualActionInvoker0::Invoke(4 /* System.Void Enemy::Move() */, __this);
		// }
		return;
	}
}
// System.Void Enemy_4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_4__ctor_m25D31E284CC620E95BA5957AC4F4AFFF47BDD54E (Enemy_4_t643AA2E51D845746BE8616835BBBFE45CE523C70* __this, const RuntimeMethod* method) 
{
	{
		// public float duration = 4;
		__this->___duration_12 = (4.0f);
		Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Hero Hero::get_S()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* Hero_get_S_mA827398B6A611A0C6348416DF8ABD0AFA60EE437 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set;}
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0 = ((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Hero::set_S(Hero)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_S_m2315DD9324673B58B7D28FE93F4D21D65D2F63AE (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set;}
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0 = ___0_value;
		((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void Hero::add_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_add_fireEvent_m92F4C1E6DAA87C8D4BA1A8A1B186C802EB761DD5 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_0 = NULL;
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_1 = NULL;
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_2 = NULL;
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_0 = __this->___fireEvent_13;
		V_0 = L_0;
	}

IL_0007:
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_1 = V_0;
		V_1 = L_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_2 = V_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)CastclassSealed((RuntimeObject*)L_4, WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var));
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C** L_5 = (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C**)(&__this->___fireEvent_13);
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_6 = V_2;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_7 = V_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_9 = V_0;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)L_9) == ((RuntimeObject*)(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Hero::remove_fireEvent(Hero/WeaponFireDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_remove_fireEvent_mC75694614E73B5A3F75775E5CD37E43E4D620BC6 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_0 = NULL;
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_1 = NULL;
	WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* V_2 = NULL;
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_0 = __this->___fireEvent_13;
		V_0 = L_0;
	}

IL_0007:
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_1 = V_0;
		V_1 = L_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_2 = V_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)CastclassSealed((RuntimeObject*)L_4, WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var));
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C** L_5 = (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C**)(&__this->___fireEvent_13);
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_6 = V_2;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_7 = V_1;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_9 = V_0;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)L_9) == ((RuntimeObject*)(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Hero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Awake_mBD288117C2AC749DF3A898A9040E4C013DB60418 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(S == null){
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0;
		L_0 = Hero_get_S_mA827398B6A611A0C6348416DF8ABD0AFA60EE437_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// S = this; // Set the Singleton only if it's null
		Hero_set_S_m2315DD9324673B58B7D28FE93F4D21D65D2F63AE_inline(__this, NULL);
		goto IL_001f;
	}

IL_0015:
	{
		// Debug.LogError("Hero.Awake() - Attempted to assign second Hero.S!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral29CEB8D6B752EBF557CF20FE107268DB744122EC, NULL);
	}

IL_001f:
	{
		// ClearWeapons();
		Hero_ClearWeapons_m1B822A3A6CD8B01557B0D3476E81F7DE870B490B(__this, NULL);
		// weapons[0].SetType(eWeaponType.blaster);
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_2 = __this->___weapons_10;
		int32_t L_3 = 0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_4 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(L_4, 1, NULL);
		// }
		return;
	}
}
// System.Void Hero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_Update_m362E8FDEE84DA54D1EC07C648A144105454DBDF9 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float hAxis = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float vAxis = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// Vector3 pos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		V_2 = L_3;
		// pos.x += hAxis * speed * Time.deltaTime;
		float* L_4 = (float*)(&(&V_2)->___x_2);
		float* L_5 = L_4;
		float L_6 = *((float*)L_5);
		float L_7 = V_0;
		float L_8 = __this->___speed_5;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_5) = (float)((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9))));
		// pos.y += vAxis * speed * Time.deltaTime;
		float* L_10 = (float*)(&(&V_2)->___y_3);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_1;
		float L_14 = __this->___speed_5;
		float L_15;
		L_15 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_13, L_14)), L_15))));
		// transform.position = pos;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_17, NULL);
		// transform.rotation = Quaternion.Euler(vAxis*pitchMult, hAxis*rollMult, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_19 = V_1;
		float L_20 = __this->___pitchMult_7;
		float L_21 = V_0;
		float L_22 = __this->___rollMult_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_23;
		L_23 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(((float)il2cpp_codegen_multiply(L_19, L_20)), ((float)il2cpp_codegen_multiply(L_21, L_22)), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_18, L_23, NULL);
		// if(Input.GetAxis("Jump") == 1 && fireEvent != null){
		float L_24;
		L_24 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if ((!(((float)L_24) == ((float)(1.0f)))))
		{
			goto IL_00a9;
		}
	}
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_25 = __this->___fireEvent_13;
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		// fireEvent();
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_26 = __this->___fireEvent_13;
		WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_inline(L_26, NULL);
	}

IL_00a9:
	{
		// }
		return;
	}
}
// System.Void Hero::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_OnTriggerEnter_mBFC05CE85B81A9037021B0FFF227EE9DED5062E8 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1367F16A70C2DA603FDEE9A74DE2B0ABC5CB061A);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* V_1 = NULL;
	float V_2 = 0.0f;
	{
		// Transform rootT = other.gameObject.transform.root;
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_get_root_m3AE09E7A2C0B2C4A649570498F25E4B4F69A1284(L_2, NULL);
		// GameObject go = rootT.gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		V_0 = L_4;
		// if(go == lastTriggerGo) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___lastTriggerGo_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0025;
		}
	}
	{
		// if(go == lastTriggerGo) return;
		return;
	}

IL_0025:
	{
		// lastTriggerGo = go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		__this->___lastTriggerGo_12 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___lastTriggerGo_12), (void*)L_8);
		// Enemy enemy = go.GetComponent<Enemy>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_10;
		L_10 = GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F(L_9, GameObject_GetComponent_TisEnemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB_m88CA17308ECE2A8FD72E8EABE0DA90718A0FFA2F_RuntimeMethod_var);
		// PowerUp pUp = go.GetComponent<PowerUp>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_12;
		L_12 = GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B(L_11, GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B_RuntimeMethod_var);
		V_1 = L_12;
		// if(enemy!= null){
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_005c;
		}
	}
	{
		// shieldLevel--;
		float L_14;
		L_14 = Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529_inline(__this, NULL);
		V_2 = L_14;
		float L_15 = V_2;
		Hero_set_shieldLevel_mA06397BE3E6B2DADC9BF724BF3E8AEA9E381CEA0(__this, ((float)il2cpp_codegen_subtract(L_15, (1.0f))), NULL);
		// Destroy(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_16, NULL);
		return;
	}

IL_005c:
	{
		// }else if (pUp != null){
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_17 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		// AbsorbPowerUp(pUp);
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_19 = V_1;
		Hero_AbsorbPowerUp_m16EC099CCBACE051E6680C210AA61EC5B3B2BF14(__this, L_19, NULL);
		return;
	}

IL_006d:
	{
		// Debug.LogWarning("Shield trigger hit by non-enemy: " + go.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		String_t* L_21;
		L_21 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_20, NULL);
		String_t* L_22;
		L_22 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1367F16A70C2DA603FDEE9A74DE2B0ABC5CB061A, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_22, NULL);
		// }
		return;
	}
}
// System.Void Hero::AbsorbPowerUp(PowerUp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_AbsorbPowerUp_m16EC099CCBACE051E6680C210AA61EC5B3B2BF14 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* ___0_pUp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eWeaponType_t232831B45101E65DF7CFD2206B61A6A2C9A5BD13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* V_1 = NULL;
	{
		// Debug.Log("Absorbed PowerUp: "+ pUp.type);
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_0 = ___0_pUp;
		int32_t* L_1 = (int32_t*)(&L_0->___type_8);
		Il2CppFakeBox<int32_t> L_2(eWeaponType_t232831B45101E65DF7CFD2206B61A6A2C9A5BD13_il2cpp_TypeInfo_var, L_1);
		String_t* L_3;
		L_3 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_2), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7E3ED2C85AF7E7F774BC301B5713520A6B79A647, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		// switch(pUp.type){
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_5 = ___0_pUp;
		int32_t L_6 = L_5->___type_8;
		if ((!(((uint32_t)L_6) == ((uint32_t)6))))
		{
			goto IL_003f;
		}
	}
	{
		// shieldLevel++;
		float L_7;
		L_7 = Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529_inline(__this, NULL);
		V_0 = L_7;
		float L_8 = V_0;
		Hero_set_shieldLevel_mA06397BE3E6B2DADC9BF724BF3E8AEA9E381CEA0(__this, ((float)il2cpp_codegen_add(L_8, (1.0f))), NULL);
		// break;
		goto IL_008b;
	}

IL_003f:
	{
		// if(pUp.type == weapons[0].type){
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_9 = ___0_pUp;
		int32_t L_10 = L_9->___type_8;
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_11 = __this->___weapons_10;
		int32_t L_12 = 0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14;
		L_14 = Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline(L_13, NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)L_14))))
		{
			goto IL_0072;
		}
	}
	{
		// Weapon weap = GetEmptyWeaponSlot();
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_15;
		L_15 = Hero_GetEmptyWeaponSlot_mE797D41618C097D8E88A24778421806568051427(__this, NULL);
		V_1 = L_15;
		// if(weap != null){
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_16 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_16, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		// weap.SetType(pUp.type);
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_18 = V_1;
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_19 = ___0_pUp;
		int32_t L_20 = L_19->___type_8;
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(L_18, L_20, NULL);
		goto IL_008b;
	}

IL_0072:
	{
		// ClearWeapons();
		Hero_ClearWeapons_m1B822A3A6CD8B01557B0D3476E81F7DE870B490B(__this, NULL);
		// weapons[0].SetType(pUp.type);
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_21 = __this->___weapons_10;
		int32_t L_22 = 0;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_23 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_24 = ___0_pUp;
		int32_t L_25 = L_24->___type_8;
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(L_23, L_25, NULL);
	}

IL_008b:
	{
		// pUp.AbsorbedBy(this.gameObject);
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_26 = ___0_pUp;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PowerUp_AbsorbedBy_m31E65CC3771949BB81C93D06796A61FB386B0D11(L_26, L_27, NULL);
		// }
		return;
	}
}
// System.Single Hero::get_shieldLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	{
		// get {return (_shieldLevel);}
		float L_0 = __this->____shieldLevel_11;
		return L_0;
	}
}
// System.Void Hero::set_shieldLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_set_shieldLevel_mA06397BE3E6B2DADC9BF724BF3E8AEA9E381CEA0 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shieldLevel = Mathf.Min(value, 4);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_0, (4.0f), NULL);
		__this->____shieldLevel_11 = L_1;
		// if(value<0){
		float L_2 = ___0_value;
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
		// Main.HERO_DIED();
		Main_HERO_DIED_m5CFF2573CB6FA1DF62B5765906D9375CF3FBEF1F(NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// Weapon Hero::GetEmptyWeaponSlot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* Hero_GetEmptyWeaponSlot_mE797D41618C097D8E88A24778421806568051427 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i=0; i<weapons.Length; i++){
		V_0 = 0;
		goto IL_0020;
	}

IL_0004:
	{
		// if(weapons[i].type == eWeaponType.none){
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_0 = __this->___weapons_10;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4;
		L_4 = Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		// return(weapons[i]);
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_5 = __this->___weapons_10;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		return L_8;
	}

IL_001c:
	{
		// for(int i=0; i<weapons.Length; i++){
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0020:
	{
		// for(int i=0; i<weapons.Length; i++){
		int32_t L_10 = V_0;
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_11 = __this->___weapons_10;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return(null);
		return (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302*)NULL;
	}
}
// System.Void Hero::ClearWeapons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero_ClearWeapons_m1B822A3A6CD8B01557B0D3476E81F7DE870B490B (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach(Weapon w in weapons){
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_0 = __this->___weapons_10;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0018;
	}

IL_000b:
	{
		// foreach(Weapon w in weapons){
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// w.SetType(eWeaponType.none);
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(L_4, 0, NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0018:
	{
		// foreach(Weapon w in weapons){
		int32_t L_6 = V_1;
		WeaponU5BU5D_t2572DD22D0A384C90BF6B2E70601C24C13380F14* L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Hero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hero__ctor_m3126CC614545DC53234578096D17CEBB9724B950 (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 30;
		__this->___speed_5 = (30.0f);
		// public float rollMult = -45;
		__this->___rollMult_6 = (-45.0f);
		// public float pitchMult = 30;
		__this->___pitchMult_7 = (30.0f);
		// public float projectileSpeed = 40;
		__this->___projectileSpeed_9 = (40.0f);
		// private float _shieldLevel = 1;
		__this->____shieldLevel_11 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_Multicast(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* currentDelegate = reinterpret_cast<WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_OpenInst(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_OpenStatic(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_OpenStaticInvoker(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_ClosedStaticInvoker(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Hero/WeaponFireDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate__ctor_mCCFC8971B19B02B9366A0A48BF122B57F4D387EB (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_Multicast;
}
// System.Void Hero/WeaponFireDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3 (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Hero/WeaponFireDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeaponFireDelegate_BeginInvoke_m18317B562F69D1AB1A9139CC77EA0637CD0B7402 (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Hero/WeaponFireDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponFireDelegate_EndInvoke_m444C7884CB7FC64D73C5975EBD2363B48C4A79B3 (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Main::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Awake_m42D567D3335795929E26981775FCA41C7E406A98 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5942A5581CDDCC1437BCFF7D033CDF92F2FFC4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD471442CC105B43A365AEE91579F8D209FBD2276_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB* V_0 = NULL;
	int32_t V_1 = 0;
	WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* V_2 = NULL;
	{
		// S = this;
		((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4), (void*)__this);
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A(__this, Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		__this->___bndCheck_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bndCheck_14), (void*)L_0);
		// Invoke(nameof(SpawnEnemy), 1f/enemySpawnPerSecond);
		float L_1 = __this->___enemySpawnPerSecond_8;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((1.0f)/L_1)), NULL);
		// WEAP_DICT = new Dictionary<eWeaponType, WeaponDefinition>();
		Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* L_2 = (Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64*)il2cpp_codegen_object_new(Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5942A5581CDDCC1437BCFF7D033CDF92F2FFC4C3(L_2, Dictionary_2__ctor_m5942A5581CDDCC1437BCFF7D033CDF92F2FFC4C3_RuntimeMethod_var);
		((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___WEAP_DICT_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___WEAP_DICT_5), (void*)L_2);
		// foreach(WeaponDefinition def in weaponDefinitions){
		WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB* L_3 = __this->___weaponDefinitions_12;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0057;
	}

IL_003e:
	{
		// foreach(WeaponDefinition def in weaponDefinitions){
		WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB* L_4 = V_0;
		int32_t L_5 = V_1;
		int32_t L_6 = L_5;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		// WEAP_DICT[def.type]= def;
		Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* L_8 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___WEAP_DICT_5;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_9 = V_2;
		int32_t L_10 = L_9->___type_0;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_11 = V_2;
		Dictionary_2_set_Item_mD471442CC105B43A365AEE91579F8D209FBD2276(L_8, L_10, L_11, Dictionary_2_set_Item_mD471442CC105B43A365AEE91579F8D209FBD2276_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0057:
	{
		// foreach(WeaponDefinition def in weaponDefinitions){
		int32_t L_13 = V_1;
		WeaponDefinitionU5BU5D_t05EA5F8F1590D0C4617B7B6ADF348B9E52C378DB* L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Main::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SpawnEnemy_m9B151AF8BB86F632C30C2AE536D88FD0E918131D (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// if(!spawnEnemies){
		bool L_0 = __this->___spawnEnemies_6;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// Invoke(nameof(SpawnEnemy), 1f/enemySpawnPerSecond);
		float L_1 = __this->___enemySpawnPerSecond_8;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((1.0f)/L_1)), NULL);
		// return;
		return;
	}

IL_0020:
	{
		// int ndx = Random.Range(0, prefabEnemies.Length);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___prefabEnemies_7;
		int32_t L_3;
		L_3 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		// GameObject go = Instantiate<GameObject>(prefabEnemies[ndx]);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___prefabEnemies_7;
		int32_t L_5 = V_0;
		int32_t L_6 = L_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_8;
		// float enemyInset = enemyInsetDefault;
		float L_9 = __this->___enemyInsetDefault_9;
		V_2 = L_9;
		// if(go.GetComponent<BoundsCheck>()!= null){
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_1;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_11;
		L_11 = GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950(L_10, GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950_RuntimeMethod_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		// enemyInset = Mathf.Abs(go.GetComponent<BoundsCheck>().radius);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_1;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_14;
		L_14 = GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950(L_13, GameObject_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_mF7D7DE448ACC9964BC5F8E9087DB0317679B3950_RuntimeMethod_var);
		float L_15 = L_14->___radius_5;
		float L_16;
		L_16 = fabsf(L_15);
		V_2 = L_16;
	}

IL_0063:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_17;
		// float xMin = -bndCheck.camWidth + enemyInset;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_18 = __this->___bndCheck_14;
		float L_19 = L_18->___camWidth_8;
		float L_20 = V_2;
		V_4 = ((float)il2cpp_codegen_add(((-L_19)), L_20));
		// float xMax = bndCheck.camWidth - enemyInset;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_21 = __this->___bndCheck_14;
		float L_22 = L_21->___camWidth_8;
		float L_23 = V_2;
		V_5 = ((float)il2cpp_codegen_subtract(L_22, L_23));
		// pos.x = Random.Range(xMin, xMax);
		float L_24 = V_4;
		float L_25 = V_5;
		float L_26;
		L_26 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_24, L_25, NULL);
		(&V_3)->___x_2 = L_26;
		// pos.y = bndCheck.camHeight + enemyInset;
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_27 = __this->___bndCheck_14;
		float L_28 = L_27->___camHeight_9;
		float L_29 = V_2;
		(&V_3)->___y_3 = ((float)il2cpp_codegen_add(L_28, L_29));
		// go.transform.position = pos;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// Invoke(nameof(SpawnEnemy), 1f/enemySpawnPerSecond);
		float L_33 = __this->___enemySpawnPerSecond_8;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral749F421D5FC0A89FF90F8BB638E8AC9A995121C9, ((float)((1.0f)/L_33)), NULL);
		// }
		return;
	}
}
// System.Void Main::DelayedRestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_DelayedRestart_mD39AF81F74900F1FFE58F5DEE3C800C604039976 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke(nameof(Restart), gameRestartDelay);
		float L_0 = __this->___gameRestartDelay_10;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_0, NULL);
		// }
		return;
	}
}
// System.Void Main::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_Restart_m9AD5BFB7049D6D3D8B74CD270A35A87C8FBA5F77 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("__Scene_0");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral8DEE32A19B0EDA3465103E5384AF09CAB214D69D, NULL);
		// }
		return;
	}
}
// System.Void Main::HERO_DIED()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_HERO_DIED_m5CFF2573CB6FA1DF62B5765906D9375CF3FBEF1F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// S.DelayedRestart();
		Main_t6125012C4D88701077DD3C4660130C5535730E1E* L_0 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4;
		Main_DelayedRestart_mD39AF81F74900F1FFE58F5DEE3C800C604039976(L_0, NULL);
		// }
		return;
	}
}
// WeaponDefinition Main::GET_WEAPON_DEFINITION(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7 (int32_t ___0_wt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m38B2AB172FB123A86BF8B779218FBC10B4D0C76B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m78414832D5C786EC1E636FB219A2DBEFDAE244B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(WEAP_DICT.ContainsKey(wt)){
		Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* L_0 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___WEAP_DICT_5;
		int32_t L_1 = ___0_wt;
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m38B2AB172FB123A86BF8B779218FBC10B4D0C76B(L_0, L_1, Dictionary_2_ContainsKey_m38B2AB172FB123A86BF8B779218FBC10B4D0C76B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return(WEAP_DICT[wt]);
		Dictionary_2_t5772096374227FB58388974E1604BD7BDBC88C64* L_3 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___WEAP_DICT_5;
		int32_t L_4 = ___0_wt;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_5;
		L_5 = Dictionary_2_get_Item_m78414832D5C786EC1E636FB219A2DBEFDAE244B4(L_3, L_4, Dictionary_2_get_Item_m78414832D5C786EC1E636FB219A2DBEFDAE244B4_RuntimeMethod_var);
		return L_5;
	}

IL_0019:
	{
		// return(new WeaponDefinition());
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_6 = (WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6*)il2cpp_codegen_object_new(WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6_il2cpp_TypeInfo_var);
		WeaponDefinition__ctor_m9FFFB87B0DA42A34FF39CC883DD46218D66F9F61(L_6, NULL);
		return L_6;
	}
}
// System.Void Main::SHIP_DESTROYED(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main_SHIP_DESTROYED_m9C81E9DAB504B845ABBEC2ECEF097872AB80954B (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if(Random.value <= e.powerUpDropChance){
		float L_0;
		L_0 = Random_get_value_m2CEA87FADF5222EF9E13D32695F15E2BA282E24B(NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = ___0_e;
		float L_2 = L_1->___powerUpDropChance_8;
		if ((!(((float)L_0) <= ((float)L_2))))
		{
			goto IL_005d;
		}
	}
	{
		// int ndx = Random.Range(0, S.powerUpFrequency.Length);
		Main_t6125012C4D88701077DD3C4660130C5535730E1E* L_3 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4;
		eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9* L_4 = L_3->___powerUpFrequency_13;
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		V_0 = L_5;
		// eWeaponType pUpType = S.powerUpFrequency[ndx];
		Main_t6125012C4D88701077DD3C4660130C5535730E1E* L_6 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4;
		eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9* L_7 = L_6->___powerUpFrequency_13;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		// GameObject go = Instantiate<GameObject>(S.prefabPowerUp);
		Main_t6125012C4D88701077DD3C4660130C5535730E1E* L_11 = ((Main_t6125012C4D88701077DD3C4660130C5535730E1E_StaticFields*)il2cpp_codegen_static_fields_for(Main_t6125012C4D88701077DD3C4660130C5535730E1E_il2cpp_TypeInfo_var))->___S_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___prefabPowerUp_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// PowerUp pUp = go.GetComponent<PowerUp>();
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_14;
		L_14 = GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B(L_13, GameObject_GetComponent_TisPowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232_mC985ADF88A699A7476F6A3A34BBAC6BF370CA38B_RuntimeMethod_var);
		// pUp.SetType(pUpType);
		PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* L_15 = L_14;
		int32_t L_16 = V_1;
		PowerUp_SetType_m017B76E45A02D5E3996170C37D08721BD81E211E(L_15, L_16, NULL);
		// pUp.transform.position = e.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_18 = ___0_e;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_20, NULL);
	}

IL_005d:
	{
		// }
		return;
	}
}
// System.Void Main::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Main__ctor_mC5886B5D00EEF6A6D8F96F3A84762F8AD71E51B6 (Main_t6125012C4D88701077DD3C4660130C5535730E1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool spawnEnemies = true;
		__this->___spawnEnemies_6 = (bool)1;
		// public float enemySpawnPerSecond = .5f;
		__this->___enemySpawnPerSecond_8 = (0.5f);
		// public float enemyInsetDefault = 1.5f;
		__this->___enemyInsetDefault_9 = (1.5f);
		// public float gameRestartDelay = 2;
		__this->___gameRestartDelay_10 = (2.0f);
		// public eWeaponType[] powerUpFrequency = new eWeaponType[]{
		//     eWeaponType.blaster, eWeaponType.blaster,
		//     eWeaponType.spread, eWeaponType.shield
		// };
		eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9* L_0 = (eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9*)(eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9*)SZArrayNew(eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9_il2cpp_TypeInfo_var, (uint32_t)4);
		eWeaponTypeU5BU5D_t102AB6F1A60DAA5C76E4E47F6ADC24CF5F7015A9* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____AAE05655B778E53C7DFB65874D6D2CE9994855E2E7C99CB98DF1730A28057790_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		__this->___powerUpFrequency_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___powerUpFrequency_13), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Parallax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Start_m6667EC7DA687585F96D395615FA015108E9E057E (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	{
		// panelHt = panels[0].localScale.y;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___panels_5;
		int32_t L_1 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_2, NULL);
		float L_4 = L_3.___y_3;
		__this->___panelHt_8 = L_4;
		// depth = panels[0].position.z;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_5 = __this->___panels_5;
		int32_t L_6 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		__this->___depth_9 = L_9;
		// panels[0].position = new Vector3(0,0,depth);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_10 = __this->___panels_5;
		int32_t L_11 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->___depth_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), (0.0f), (0.0f), L_13, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_14, NULL);
		// panels[1].position = new Vector3(0, panelHt, depth);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_15 = __this->___panels_5;
		int32_t L_16 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		float L_18 = __this->___panelHt_8;
		float L_19 = __this->___depth_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), L_18, L_19, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_17, L_20, NULL);
		// }
		return;
	}
}
// System.Void Parallax::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Update_m1C1CE1907CC9AE212646371FAC08BE7FDCB116C5 (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float tY, tX=0;
		V_1 = (0.0f);
		// tY= Time.time * scrollSpeed % panelHt + (panelHt *0.5f);
		float L_0;
		L_0 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_1 = __this->___scrollSpeed_6;
		float L_2 = __this->___panelHt_8;
		float L_3 = __this->___panelHt_8;
		V_0 = ((float)il2cpp_codegen_add((fmodf(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), ((float)il2cpp_codegen_multiply(L_3, (0.5f)))));
		// if(playerTrans != null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___playerTrans_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0053;
		}
	}
	{
		// tX = -playerTrans.transform.position.x * motionMult;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___playerTrans_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___x_2;
		float L_10 = __this->___motionMult_7;
		V_1 = ((float)il2cpp_codegen_multiply(((-L_9)), L_10));
	}

IL_0053:
	{
		// panels[0].position = new Vector3(tX, tY -panelHt, depth);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_11 = __this->___panels_5;
		int32_t L_12 = 0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		float L_14 = V_1;
		float L_15 = V_0;
		float L_16 = __this->___panelHt_8;
		float L_17 = __this->___depth_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), L_14, ((float)il2cpp_codegen_subtract(L_15, L_16)), L_17, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_18, NULL);
		// if(tY >= 0){
		float L_19 = V_0;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		// panels[1].position = new Vector3(tX, tY -panelHt, depth);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_20 = __this->___panels_5;
		int32_t L_21 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		float L_23 = V_1;
		float L_24 = V_0;
		float L_25 = __this->___panelHt_8;
		float L_26 = __this->___depth_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_27), L_23, ((float)il2cpp_codegen_subtract(L_24, L_25)), L_26, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_27, NULL);
		return;
	}

IL_009e:
	{
		// panels[1].position = new Vector3(tX, tY +panelHt, depth);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_28 = __this->___panels_5;
		int32_t L_29 = 1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		float L_31 = V_1;
		float L_32 = V_0;
		float L_33 = __this->___panelHt_8;
		float L_34 = __this->___depth_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_31, ((float)il2cpp_codegen_add(L_32, L_33)), L_34, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_30, L_35, NULL);
		// }
		return;
	}
}
// System.Void Parallax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax__ctor_m1977D1694F369305A6582E1F215E0B882C2B0EBB (Parallax_t0F298CA660D0DC7DA354AA609364C48C9622AF73* __this, const RuntimeMethod* method) 
{
	{
		// public float scrollSpeed = -30f;
		__this->___scrollSpeed_6 = (-30.0f);
		// public float motionMult = 0.25f;
		__this->___motionMult_7 = (0.25f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PowerUp::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Awake_m9C0499875266190D81D6ABD4758F32DABC8EE996 (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cube = transform.GetChild(0).gameObject;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_0, 0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		__this->___cube_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cube_9), (void*)L_2);
		// letter = GetComponent<TextMeshPro>();
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_3;
		L_3 = Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E(__this, Component_GetComponent_TisTextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E_m991A1A2A2EFE70B64BBECFF1B44EE5C04FF8994E_RuntimeMethod_var);
		__this->___letter_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___letter_10), (void*)L_3);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_13), (void*)L_4);
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_5;
		L_5 = Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A(__this, Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		__this->___bndCheck_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bndCheck_14), (void*)L_5);
		// cubeMat = cube.GetComponent<Renderer>().material;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___cube_9;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_7;
		L_7 = GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A(L_6, GameObject_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m026EB44DB6238F13E2AFBECF1FBBE924CB1B040A_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_8;
		L_8 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_7, NULL);
		__this->___cubeMat_15 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cubeMat_15), (void*)L_8);
		// Vector3 vel = Random.onUnitSphere;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Random_get_onUnitSphere_mA7FD531C3043945E5EA290F670E79A78EFAC0D92(NULL);
		V_0 = L_9;
		// vel.z =0;
		(&V_0)->___z_4 = (0.0f);
		// vel.Normalize();
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline((&V_0), NULL);
		// vel *= Random.Range(driftMinMax.x, driftMinMax.y);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___driftMinMax_5);
		float L_12 = L_11->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___driftMinMax_5);
		float L_14 = L_13->___y_1;
		float L_15;
		L_15 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_12, L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_15, NULL);
		V_0 = L_16;
		// rigid.velocity = vel;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_17 = __this->___rigid_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_17, L_18, NULL);
		// transform.rotation = Quaternion.identity;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_19, L_20, NULL);
		// rotPerSecond = new Vector3(Random.Range(rotMinMax[0], rotMinMax[1]),
		//                             Random.Range(rotMinMax[0], rotMinMax[1]),
		//                             Random.Range(rotMinMax[0], rotMinMax[1]));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_21 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_22;
		L_22 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_21, 0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_24;
		L_24 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_23, 1, NULL);
		float L_25;
		L_25 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_22, L_24, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_27;
		L_27 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_26, 0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_28 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_29;
		L_29 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_28, 1, NULL);
		float L_30;
		L_30 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_27, L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_31 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_32;
		L_32 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_31, 0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_33 = (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)(&__this->___rotMinMax_4);
		float L_34;
		L_34 = Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline(L_33, 1, NULL);
		float L_35;
		L_35 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_32, L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), L_25, L_30, L_35, /*hidden argument*/NULL);
		__this->___rotPerSecond_11 = L_36;
		// birthTime = Time.time;
		float L_37;
		L_37 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___birthTime_12 = L_37;
		// }
		return;
	}
}
// System.Void PowerUp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Update_m803C8D79E77F9BDC008209502A77E448B2A345C6 (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cube.transform.rotation = Quaternion.Euler(rotPerSecond*Time.time);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cube_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___rotPerSecond_11;
		float L_3;
		L_3 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_4, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_1, L_5, NULL);
		// float u = (Time.time - (birthTime+lifeTime))/fadeTime;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___birthTime_12;
		float L_8 = __this->___lifeTime_6;
		float L_9 = __this->___fadeTime_7;
		V_0 = ((float)(((float)il2cpp_codegen_subtract(L_6, ((float)il2cpp_codegen_add(L_7, L_8))))/L_9));
		// if(u>=1){
		float L_10 = V_0;
		if ((!(((float)L_10) >= ((float)(1.0f)))))
		{
			goto IL_0054;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_11, NULL);
		// return;
		return;
	}

IL_0054:
	{
		// if(u>0){
		float L_12 = V_0;
		if ((!(((float)L_12) > ((float)(0.0f)))))
		{
			goto IL_00ae;
		}
	}
	{
		// Color c = cubeMat.color;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_13 = __this->___cubeMat_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Material_get_color_mA4B7D4B96200D9D8B4F36BF19957E9DA81071DBB(L_13, NULL);
		V_1 = L_14;
		// c.a = 1f - u;
		float L_15 = V_0;
		(&V_1)->___a_3 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		// cubeMat.color = c;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = __this->___cubeMat_15;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_1;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_16, L_17, NULL);
		// c=letter.color;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_18 = __this->___letter_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		V_1 = L_19;
		// c.a = 1f -(u*0.5f);
		float L_20 = V_0;
		(&V_1)->___a_3 = ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(L_20, (0.5f)))));
		// letter.color = c;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_21 = __this->___letter_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22 = V_1;
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
	}

IL_00ae:
	{
		// if(!bndCheck.isOnScreen){
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_23 = __this->___bndCheck_14;
		bool L_24;
		L_24 = BoundsCheck_get_isOnScreen_m0DA4539B3F6D6613334D03786C1C889452138ACC(L_23, NULL);
		if (L_24)
		{
			goto IL_00c6;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_25, NULL);
	}

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void PowerUp::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_SetType_m017B76E45A02D5E3996170C37D08721BD81E211E (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, int32_t ___0_wt, const RuntimeMethod* method) 
{
	WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* V_0 = NULL;
	{
		// WeaponDefinition def = Main.GET_WEAPON_DEFINITION(wt);
		int32_t L_0 = ___0_wt;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_1;
		L_1 = Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7(L_0, NULL);
		V_0 = L_1;
		// cubeMat.color = def.powerUpColor;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = __this->___cubeMat_15;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_3 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___powerUpColor_2;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_2, L_4, NULL);
		// letter.text = def.letter;
		TextMeshPro_t4560AB28A3EAF503895A781A9C625273D833270E* L_5 = __this->___letter_10;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_6 = V_0;
		String_t* L_7 = L_6->___letter_1;
		VirtualActionInvoker1< String_t* >::Invoke(64 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_5, L_7);
		// type = wt;
		int32_t L_8 = ___0_wt;
		__this->___type_8 = L_8;
		// }
		return;
	}
}
// System.Void PowerUp::AbsorbedBy(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_AbsorbedBy_m31E65CC3771949BB81C93D06796A61FB386B0D11 (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// }
		return;
	}
}
// System.Void PowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp__ctor_m11A07324761B124C8FD32A1B98161AA3D92ABF65 (PowerUp_tE7C54110BB5FC1180B11E810D59F8AA32123F232* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 rotMinMax = new Vector2(15,90);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (15.0f), (90.0f), /*hidden argument*/NULL);
		__this->___rotMinMax_4 = L_0;
		// public Vector2 driftMinMax = new Vector2(.25f,2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_1), (0.25f), (2.0f), /*hidden argument*/NULL);
		__this->___driftMinMax_5 = L_1;
		// public float lifeTime = 10;
		__this->___lifeTime_6 = (10.0f);
		// public float fadeTime = 4;
		__this->___fadeTime_7 = (4.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// eWeaponType ProjectileHero::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProjectileHero_get_type_mE1099F28242EDD2CD8D8664A39F1115AC24230C5 (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	{
		// get{return (_type);}
		int32_t L_0 = __this->____type_7;
		return L_0;
	}
}
// System.Void ProjectileHero::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_set_type_m495C10F67A06D8DBAA3067F7153827E289026CBD (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set{SetType (value);}
		int32_t L_0 = ___0_value;
		ProjectileHero_SetType_m2AC08B31BBB42C325E269FE5B9B7668FBFB347C2(__this, L_0, NULL);
		// set{SetType (value);}
		return;
	}
}
// System.Void ProjectileHero::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_Awake_m064DF4013385D847123797DF70AEB93681AF046E (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bndCheck = GetComponent<BoundsCheck>();
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0;
		L_0 = Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A(__this, Component_GetComponent_TisBoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116_m2C5250FC93B2101409AE876046348AFCD1028F4A_RuntimeMethod_var);
		__this->___bndCheck_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bndCheck_4), (void*)L_0);
		// rend = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_1;
		L_1 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___rend_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rend_5), (void*)L_1);
		// rigid = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2;
		L_2 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigid_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigid_6), (void*)L_2);
		// }
		return;
	}
}
// System.Void ProjectileHero::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_Update_mFD4BA5B9ADC6C84F6FEE35AE301A92C3CD455D66 (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(bndCheck.LocIs(BoundsCheck.eScreenLocs.offUp)){
		BoundsCheck_t793F2EE2E9DC2EAA9B8C7451AD3516157171A116* L_0 = __this->___bndCheck_4;
		bool L_1;
		L_1 = BoundsCheck_LocIs_mD7F85EF6E6B538E5584F40DA42B379A68D32EAF8(L_0, 4, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void ProjectileHero::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_SetType_m2AC08B31BBB42C325E269FE5B9B7668FBFB347C2 (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, int32_t ___0_eType, const RuntimeMethod* method) 
{
	WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* V_0 = NULL;
	{
		// _type = eType;
		int32_t L_0 = ___0_eType;
		__this->____type_7 = L_0;
		// WeaponDefinition def = Main.GET_WEAPON_DEFINITION(_type);
		int32_t L_1 = __this->____type_7;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_2;
		L_2 = Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7(L_1, NULL);
		V_0 = L_2;
		// rend.material.color = def.projectileColor;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_3 = __this->___rend_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_4;
		L_4 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_3, NULL);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_5 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___projectileColor_5;
		Material_set_color_m5C32DEBB215FF9EE35E7B575297D8C2F29CC2A2D(L_4, L_6, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 ProjectileHero::get_vel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ProjectileHero_get_vel_m348636FDDA3FFDEF531B3AEBC57D9BD9C32EAE71 (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	{
		// get{return rigid.velocity;}
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		return L_1;
	}
}
// System.Void ProjectileHero::set_vel(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		// set{rigid.velocity = value;}
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigid_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_value;
		Rigidbody_set_velocity_mE4031DF1C2C1CCE889F2AC9D8871D83795BB0D62(L_0, L_1, NULL);
		// set{rigid.velocity = value;}
		return;
	}
}
// System.Void ProjectileHero::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProjectileHero__ctor_m08A292ACF9657E615F043D6BF148ADCF54F7EADC (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Shield::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Start_mFC8ACA65D3DFAA139A3E48E2C0FB05306BC14E4D (Shield_tD442A7319E3274746E5753D39FDA609B3535733F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mat = GetComponent<Renderer>().material;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		__this->___mat_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mat_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void Shield::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield_Update_mBD8AA58F5898B567D7927299CF16329620C5DC3A (Shield_tD442A7319E3274746E5753D39FDA609B3535733F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		// int currLevel = Mathf.FloorToInt(Hero.S.shieldLevel);
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0;
		L_0 = Hero_get_S_mA827398B6A611A0C6348416DF8ABD0AFA60EE437_inline(NULL);
		float L_1;
		L_1 = Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529_inline(L_0, NULL);
		int32_t L_2;
		L_2 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_1, NULL);
		V_0 = L_2;
		// if(levelShown != currLevel){
		int32_t L_3 = __this->___levelShown_5;
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0042;
		}
	}
	{
		// levelShown = currLevel;
		int32_t L_5 = V_0;
		__this->___levelShown_5 = L_5;
		// mat.mainTextureOffset = new Vector2(0.2f*levelShown, 0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_6 = __this->___mat_6;
		int32_t L_7 = __this->___levelShown_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply((0.200000003f), ((float)L_7))), (0.0f), /*hidden argument*/NULL);
		Material_set_mainTextureOffset_m87C139F275814719F9A10709C34E2132DFEB7A12(L_6, L_8, NULL);
	}

IL_0042:
	{
		// float rZ = -(rotationsPerSecond*Time.time*360) % 360f;
		float L_9 = __this->___rotationsPerSecond_4;
		float L_10;
		L_10 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		V_1 = (fmodf(((-((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_9, L_10)), (360.0f))))), (360.0f)));
		// transform.rotation = Quaternion.Euler(0, 0, rZ);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), L_12, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Shield::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Shield__ctor_m84F15F62312B42210EEC42589A2E28CB8F9F93DE (Shield_tD442A7319E3274746E5753D39FDA609B3535733F* __this, const RuntimeMethod* method) 
{
	{
		// public float rotationsPerSecond = 0.1f;
		__this->___rotationsPerSecond_4 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Vector3 Utils::Bezier(System.Single,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Utils_Bezier_m3D34A55E5AB2B7B134F19256768A9F277E3AD15A (float ___0_u, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_points, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Vector3[,] vArr = new Vector3[points.Length, points.Length];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___1_points;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___1_points;
		il2cpp_array_size_t L_3[] = { (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_0)->max_length)), (il2cpp_array_size_t)((int32_t)(((RuntimeArray*)L_1)->max_length)) };
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_2 = (Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4*)GenArrayNew(Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4_il2cpp_TypeInfo_var, L_3);
		V_0 = L_2;
		// int r = points.Length - 1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ___1_points;
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
		// for(int c = 0; c < points.Length; c++){
		V_2 = 0;
		goto IL_0029;
	}

IL_0016:
	{
		// vArr[r, c] = points[c];
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ___1_points;
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		(L_5)->SetAtUnchecked(L_6, L_7, L_11);
		// for(int c = 0; c < points.Length; c++){
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0029:
	{
		// for(int c = 0; c < points.Length; c++){
		int32_t L_13 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ___1_points;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// for(r--; r>=0 ; r--){
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_15, 1));
		goto IL_0069;
	}

IL_0035:
	{
		// for(int c = 0; c<=r; c++){
		V_3 = 0;
		goto IL_0061;
	}

IL_0039:
	{
		// vArr[r,c] = Vector3.LerpUnclamped(vArr[r+1,c], vArr[r+1,c+1], u);
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_16 = V_0;
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_19 = V_0;
		int32_t L_20 = V_1;
		int32_t L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = (L_19)->GetAtUnchecked(((int32_t)il2cpp_codegen_add(L_20, 1)), L_21);
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = (L_23)->GetAtUnchecked(((int32_t)il2cpp_codegen_add(L_24, 1)), ((int32_t)il2cpp_codegen_add(L_25, 1)));
		float L_27 = ___0_u;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline(L_22, L_26, L_27, NULL);
		(L_16)->SetAtUnchecked(L_17, L_18, L_28);
		// for(int c = 0; c<=r; c++){
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0061:
	{
		// for(int c = 0; c<=r; c++){
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) <= ((int32_t)L_31)))
		{
			goto IL_0039;
		}
	}
	{
		// for(r--; r>=0 ; r--){
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_32, 1));
	}

IL_0069:
	{
		// for(r--; r>=0 ; r--){
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// return vArr[0,0];
		Vector3U5BU2CU5D_tCF0A54F4B5143C8BF0F998ECD98E52AFBB4E73C4* L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = (L_34)->GetAtUnchecked(0, 0);
		return L_35;
	}
}
// UnityEngine.Material[] Utils::GetAllMaterials(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* Utils_GetAllMaterials_m5CC13A89BE2CE0687D8C076E71CF34161510CFE6 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_go, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* V_0 = NULL;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// Renderer[] rends = go.GetComponentsInChildren<Renderer>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_go;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_1;
		L_1 = GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734(L_0, GameObject_GetComponentsInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mA2746088DB45856FD76C725AB403CEF5A8997734_RuntimeMethod_var);
		V_0 = L_1;
		// Material[] mats = new Material[rends.Length];
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_2 = V_0;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_3 = (MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D*)SZArrayNew(MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		V_1 = L_3;
		// for(int i=0; i<rends.Length; i++){
		V_2 = 0;
		goto IL_0023;
	}

IL_0014:
	{
		// mats[i] = rends[i].material;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_4 = V_1;
		int32_t L_5 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_6 = V_0;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_10;
		L_10 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_9, NULL);
		ArrayElementTypeCheck (L_4, L_10);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)L_10);
		// for(int i=0; i<rends.Length; i++){
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0023:
	{
		// for(int i=0; i<rends.Length; i++){
		int32_t L_12 = V_2;
		RendererU5BU5D_t32FDD782F67917B2291EA4FF242719877440A02A* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0014;
		}
	}
	{
		// return mats;
		MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* L_14 = V_1;
		return L_14;
	}
}
// System.Void Utils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__ctor_m419277C5F83D8F73636DE513598E4A5EF9C85A11 (Utils_tDC76C0B066427F57CE1560F010CAD6E7E7FC192A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void WeaponDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponDefinition__ctor_m9FFFB87B0DA42A34FF39CC883DD46218D66F9F61 (WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* __this, const RuntimeMethod* method) 
{
	{
		// public Color powerUpColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___powerUpColor_2 = L_0;
		// public Color projectileColor = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___projectileColor_5 = L_1;
		// public float velocity = 50;
		__this->___velocity_9 = (50.0f);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Weapon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Start_m9C36CD27AC588F065212BBA1975C7EA38ED563BE (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisHero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_mF3360EE369411FAD1664005F6A77A043F97BEF7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_Fire_m0991C13F9C9A395330E5F600C1B36AF91EA01AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2);
		s_Il2CppMethodInitialized = true;
	}
	Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* V_0 = NULL;
	{
		// if(PROJECTILE_ANCHOR == null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ((Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var))->___PROJECTILE_ANCHOR_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// GameObject go = new GameObject("_ProjectileAnchor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_2, _stringLiteral15FD77B92FAC1A51D73AB558C072339BBC72E5D2, NULL);
		// PROJECTILE_ANCHOR = go.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		((Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var))->___PROJECTILE_ANCHOR_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var))->___PROJECTILE_ANCHOR_4), (void*)L_3);
	}

IL_0021:
	{
		// shotPointTrans = transform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_4, 0, NULL);
		__this->___shotPointTrans_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___shotPointTrans_9), (void*)L_5);
		// SetType(_type);
		int32_t L_6 = __this->____type_5;
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(__this, L_6, NULL);
		// Hero hero = GetComponentInParent<Hero>();
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_7;
		L_7 = Component_GetComponentInParent_TisHero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_mF3360EE369411FAD1664005F6A77A043F97BEF7F(__this, Component_GetComponentInParent_TisHero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_mF3360EE369411FAD1664005F6A77A043F97BEF7F_RuntimeMethod_var);
		V_0 = L_7;
		// if(hero != null) hero.fireEvent += Fire;
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		// if(hero != null) hero.fireEvent += Fire;
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_10 = V_0;
		WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* L_11 = (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C*)il2cpp_codegen_object_new(WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C_il2cpp_TypeInfo_var);
		WeaponFireDelegate__ctor_mCCFC8971B19B02B9366A0A48BF122B57F4D387EB(L_11, __this, (intptr_t)((void*)Weapon_Fire_m0991C13F9C9A395330E5F600C1B36AF91EA01AFE_RuntimeMethod_var), NULL);
		Hero_add_fireEvent_m92F4C1E6DAA87C8D4BA1A8A1B186C802EB761DD5(L_10, L_11, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// eWeaponType Weapon::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	{
		// get{return(_type);}
		int32_t L_0 = __this->____type_5;
		return L_0;
	}
}
// System.Void Weapon::set_type(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_set_type_m9D9805D69D95D7DC294DB5235E5FC2425246EE25 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set{ SetType(value);}
		int32_t L_0 = ___0_value;
		Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994(__this, L_0, NULL);
		// set{ SetType(value);}
		return;
	}
}
// System.Void Weapon::SetType(eWeaponType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_SetType_m6E6E6647A439754963DC24E13134EF2F6F8EE994 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, int32_t ___0_wt, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _type = wt;
		int32_t L_0 = ___0_wt;
		__this->____type_5 = L_0;
		// if(type == eWeaponType.none){
		int32_t L_1;
		L_1 = Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline(__this, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// this.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// def = Main.GET_WEAPON_DEFINITION(_type);
		int32_t L_4 = __this->____type_5;
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_5;
		L_5 = Main_GET_WEAPON_DEFINITION_mAC1E51058C34832F74DEEA356A43AA2A024590A7(L_4, NULL);
		__this->___def_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___def_6), (void*)L_5);
		// if(weaponModel != null) Destroy(weaponModel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___weaponModel_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0052;
		}
	}
	{
		// if(weaponModel != null) Destroy(weaponModel);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___weaponModel_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_8, NULL);
	}

IL_0052:
	{
		// weaponModel  = Instantiate<GameObject>(def.weaponModelPrefab, transform);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_9 = __this->___def_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___weaponModelPrefab_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		__this->___weaponModel_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weaponModel_8), (void*)L_12);
		// weaponModel.transform.localPosition = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___weaponModel_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_14, L_15, NULL);
		// weaponModel.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___weaponModel_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_17, L_18, NULL);
		// nextShotTime = 0;
		__this->___nextShotTime_7 = (0.0f);
		// }
		return;
	}
}
// System.Void Weapon::Fire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Fire_m0991C13F9C9A395330E5F600C1B36AF91EA01AFE (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if(!gameObject.activeInHierarchy) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		bool L_1;
		L_1 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_0, NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if(!gameObject.activeInHierarchy) return;
		return;
	}

IL_000e:
	{
		// if(Time.time < nextShotTime) return;
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___nextShotTime_7;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		// if(Time.time < nextShotTime) return;
		return;
	}

IL_001c:
	{
		// Vector3 vel = Vector3.up * def.velocity;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_5 = __this->___def_6;
		float L_6 = L_5->___velocity_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		V_0 = L_7;
		// switch(type){
		int32_t L_8;
		L_8 = Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline(__this, NULL);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_004f;
		}
	}
	{
		return;
	}

IL_0042:
	{
		// p= MakeProjectile();
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_11;
		L_11 = Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA(__this, NULL);
		// p.vel = vel;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C(L_11, L_12, NULL);
		// break;
		return;
	}

IL_004f:
	{
		// p = MakeProjectile();
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_13;
		L_13 = Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA(__this, NULL);
		// p.vel = vel;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C(L_13, L_14, NULL);
		// p = MakeProjectile();
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_15;
		L_15 = Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA(__this, NULL);
		// p.transform.rotation = Quaternion.AngleAxis(10, Vector3.back);
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((10.0f), L_18, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_17, L_19, NULL);
		// p.vel = p.transform.rotation * vel;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_20 = L_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_22, L_23, NULL);
		ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C(L_20, L_24, NULL);
		// p = MakeProjectile();
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_25;
		L_25 = Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA(__this, NULL);
		// p.transform.rotation = Quaternion.AngleAxis(-10, Vector3.back);
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29;
		L_29 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80((-10.0f), L_28, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_27, L_29, NULL);
		// p.vel = p.transform.rotation * vel;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_30 = L_26;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_32, L_33, NULL);
		ProjectileHero_set_vel_m212DCBAE7043E5A87D12E5F851CA344BB318BC3C(L_30, L_34, NULL);
		// }
		return;
	}
}
// ProjectileHero Weapon::MakeProjectile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* Weapon_MakeProjectile_mD2E425EECFAC4E9CD75EE9FD9AC759639DD730FA (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// go = Instantiate<GameObject>(def.projectilePrefab, PROJECTILE_ANCHOR);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_0 = __this->___def_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0->___projectilePrefab_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ((Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_StaticFields*)il2cpp_codegen_static_fields_for(Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302_il2cpp_TypeInfo_var))->___PROJECTILE_ANCHOR_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_1, L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		// ProjectileHero p = go.GetComponent<ProjectileHero>();
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_4;
		L_4 = GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD(L_3, GameObject_GetComponent_TisProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661_m9FEFE1CF319DBC4C7AFE3FC7881687CC779460BD_RuntimeMethod_var);
		// Vector3 pos = shotPointTrans.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___shotPointTrans_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		V_0 = L_6;
		// pos.z = 0;
		(&V_0)->___z_4 = (0.0f);
		// p.transform.position = pos;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_7 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_8, L_9, NULL);
		// p.type = type;
		ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* L_10 = L_7;
		int32_t L_11;
		L_11 = Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline(__this, NULL);
		ProjectileHero_set_type_m495C10F67A06D8DBAA3067F7153827E289026CBD(L_10, L_11, NULL);
		// nextShotTime = Time.time + def.delayBetweenShots;
		float L_12;
		L_12 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		WeaponDefinition_t08649372CC84A34D573B2116DCF34B36D7A156D6* L_13 = __this->___def_6;
		float L_14 = L_13->___delayBetweenShots_8;
		__this->___nextShotTime_7 = ((float)il2cpp_codegen_add(L_12, L_14));
		// return(p);
		return L_10;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m6F053F0444AE8DF68EDA99C92CF944903C784332 (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___0_x;
		float L_1 = ___1_y;
		float L_2 = ___2_z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0019;
			}
			case 1:
			{
				goto IL_0022;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0034;
	}

IL_0019:
	{
		float L_3 = __this->___x_2;
		V_2 = L_3;
		goto IL_003f;
	}

IL_0022:
	{
		float L_4 = __this->___y_3;
		V_2 = L_4;
		goto IL_003f;
	}

IL_002b:
	{
		float L_5 = __this->___z_4;
		V_2 = L_5;
		goto IL_003f;
	}

IL_0034:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral27C7727EAAAD675C621F6257F2BD5190CE343979)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector3_get_Item_m163510BFC2F7BFAD1B601DC9F3606B799CF199F2_RuntimeMethod_var)));
	}

IL_003f:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_cyan_m182A29E7475C0A98ACC03E1CF5252BAB83F0BA31_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ProjectileHero_get_type_mE1099F28242EDD2CD8D8664A39F1115AC24230C5_inline (ProjectileHero_tF782430F464EF260AEE1A854BBF0AB384662B661* __this, const RuntimeMethod* method) 
{
	{
		// get{return (_type);}
		int32_t L_0 = __this->____type_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* Hero_get_S_mA827398B6A611A0C6348416DF8ABD0AFA60EE437_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set;}
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0 = ((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Hero_set_S_m2315DD9324673B58B7D28FE93F4D21D65D2F63AE_inline (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public Hero S { get; private set;}
		Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* L_0 = ___0_value;
		((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_StaticFields*)il2cpp_codegen_static_fields_for(Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58_il2cpp_TypeInfo_var))->___U3CSU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WeaponFireDelegate_Invoke_mF32B4C184A436B6C94AD2B9579E8D702800C45D3_inline (WeaponFireDelegate_tDA9F51B2B48E5874FBC7774E08B9D178EB5CF54C* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Hero_get_shieldLevel_mFF990AF357558DE556C8602CA01F7B1C16592529_inline (Hero_t4AF0493C0DB7C1F0204BA88918C149A9ADC20F58* __this, const RuntimeMethod* method) 
{
	{
		// get {return (_shieldLevel);}
		float L_0 = __this->____shieldLevel_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Weapon_get_type_m3B115ADD067CFC3C20DCA11FA703235A1AD2A389_inline (Weapon_tC6498A6B45093D50A1AB4BBD7C82842D5C624302* __this, const RuntimeMethod* method) 
{
	{
		// get{return(_type);}
		int32_t L_0 = __this->____type_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	{
		int32_t L_0 = ___0_index;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		goto IL_0022;
	}

IL_0010:
	{
		float L_4 = __this->___x_0;
		V_2 = L_4;
		goto IL_002d;
	}

IL_0019:
	{
		float L_5 = __this->___y_1;
		V_2 = L_5;
		goto IL_002d;
	}

IL_0022:
	{
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4379B0249B80A34ABC2748B5F0D030FD7D4E007C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Vector2_get_Item_m18BC65BB0512B16A1F9C8BE4B83A3E7BBAD7064D_RuntimeMethod_var)));
	}

IL_002d:
	{
		float L_7 = V_2;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_LerpUnclamped_m4109A459C1DB823310A10B8B1E80CB6877418347_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___x_2;
		float L_6 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_a;
		float L_8 = L_7.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_b;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_a;
		float L_12 = L_11.___y_3;
		float L_13 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___0_a;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___1_b;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___0_a;
		float L_19 = L_18.___z_4;
		float L_20 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_21), ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_3, L_5)), L_6)))), ((float)il2cpp_codegen_add(L_8, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_10, L_12)), L_13)))), ((float)il2cpp_codegen_add(L_15, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_17, L_19)), L_20)))), /*hidden argument*/NULL);
		V_0 = L_21;
		goto IL_004b;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_0;
		return L_22;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
