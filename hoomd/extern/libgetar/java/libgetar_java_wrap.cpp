/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#define SWIGJAVA


#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif 
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif



/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "../src/GTAR.hpp"
using namespace gtar;


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>

SWIGINTERN std::vector< Record >::const_reference std_vector_Sl_Record_Sg__get(std::vector< Record > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_Record_Sg__set(std::vector< Record > *self,int i,std::vector< Record >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN std::vector< std::string >::const_reference std_vector_Sl_std_string_Sg__get(std::vector< std::string > *self,int i){
                int size = int(self->size());
                if (i>=0 && i<size)
                    return (*self)[i];
                else
                    throw std::out_of_range("vector index out of range");
            }
SWIGINTERN void std_vector_Sl_std_string_Sg__set(std::vector< std::string > *self,int i,std::vector< std::string >::value_type const &val){
                int size = int(self->size());
                if (i>=0 && i<size)
                    (*self)[i] = val;
                else
                    throw std::out_of_range("vector index out of range");
            }

#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1SharedArrayChar_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  SharedArray< char > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (SharedArray< char > *)new SharedArray< char >();
  *(SharedArray< char > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1SharedArrayChar_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  size_t arg2 ;
  SharedArray< char > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(char **)&jarg1; 
  arg2 = (size_t)jarg2; 
  result = (SharedArray< char > *)new SharedArray< char >(arg1,arg2);
  *(SharedArray< char > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1SharedArrayChar_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SharedArray< char > *arg1 = 0 ;
  SharedArray< char > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "SharedArray< char > const & reference is null");
    return 0;
  } 
  result = (SharedArray< char > *)new SharedArray< char >((SharedArray< char > const &)*arg1);
  *(SharedArray< char > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_delete_1SharedArrayChar(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(SharedArray< char > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1copy(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  SharedArray< char > *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  arg2 = *(SharedArray< char > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "SharedArray< char > const & reference is null");
    return ;
  } 
  (arg1)->copy((SharedArray< char > const &)*arg2);
}


SWIGEXPORT jboolean JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1isNull(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  result = (bool)(arg1)->isNull();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1begin(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  SharedArray< char >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  result = (SharedArray< char >::iterator)(arg1)->begin();
  *(SharedArray< char >::iterator *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1end(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  SharedArray< char >::iterator result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  result = (SharedArray< char >::iterator)(arg1)->end();
  *(SharedArray< char >::iterator *)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  result = (char *)(arg1)->get();
  *(char **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  result = ((SharedArray< char > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1release(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  (arg1)->release();
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_SharedArrayChar_1swap(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  SharedArray< char > *arg1 = (SharedArray< char > *) 0 ;
  SharedArray< char > *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(SharedArray< char > **)&jarg1; 
  arg2 = *(SharedArray< char > **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "SharedArray< char > & reference is null");
    return ;
  } 
  (arg1)->swap(*arg2);
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1VectorRecords_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< Record > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< Record > *)new std::vector< Record >();
  *(std::vector< Record > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1VectorRecords_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< Record >::size_type arg1 ;
  std::vector< Record > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< Record >::size_type)jarg1; 
  result = (std::vector< Record > *)new std::vector< Record >(arg1);
  *(std::vector< Record > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  std::vector< Record >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  result = ((std::vector< Record > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  std::vector< Record >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  result = ((std::vector< Record > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  std::vector< Record >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  arg2 = (std::vector< Record >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  result = (bool)((std::vector< Record > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  std::vector< Record >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  arg2 = *(std::vector< Record >::value_type **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< Record >::value_type const & reference is null");
    return ;
  } 
  (arg1)->push_back((std::vector< Record >::value_type const &)*arg2);
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jlong jresult = 0 ;
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  int arg2 ;
  std::vector< Record >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< Record >::value_type *) &std_vector_Sl_Record_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  *(std::vector< Record >::value_type **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorRecords_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3, jobject jarg3_) {
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  int arg2 ;
  std::vector< Record >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(std::vector< Record > **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(std::vector< Record >::value_type **)&jarg3;
  if (!arg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "std::vector< Record >::value_type const & reference is null");
    return ;
  } 
  try {
    std_vector_Sl_Record_Sg__set(arg1,arg2,(Record const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_delete_1VectorRecords(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< Record > *arg1 = (std::vector< Record > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< Record > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1VectorStrings_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (std::vector< std::string > *)new std::vector< std::string >();
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1VectorStrings_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  std::vector< std::string >::size_type arg1 ;
  std::vector< std::string > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (std::vector< std::string >::size_type)jarg1; 
  result = (std::vector< std::string > *)new std::vector< std::string >(arg1);
  *(std::vector< std::string > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->size();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1capacity(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = ((std::vector< std::string > const *)arg1)->capacity();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1reserve(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::size_type arg2 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (std::vector< std::string >::size_type)jarg2; 
  (arg1)->reserve(arg2);
}


SWIGEXPORT jboolean JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1isEmpty(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jboolean jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  result = (bool)((std::vector< std::string > const *)arg1)->empty();
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1clear(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  (arg1)->clear();
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  std::vector< std::string >::value_type *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  std::vector< std::string >::value_type arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->push_back((std::vector< std::string >::value_type const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  jstring jresult = 0 ;
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  try {
    result = (std::vector< std::string >::value_type *) &std_vector_Sl_std_string_Sg__get(arg1,arg2);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return 0;
  }
  
  jresult = jenv->NewStringUTF(result->c_str()); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_VectorStrings_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  int arg2 ;
  std::vector< std::string >::value_type *arg3 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  arg2 = (int)jarg2; 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return ;
  std::vector< std::string >::value_type arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  try {
    std_vector_Sl_std_string_Sg__set(arg1,arg2,(std::string const &)*arg3);
  }
  catch(std::out_of_range &_e) {
    SWIG_JavaThrowException(jenv, SWIG_JavaIndexOutOfBoundsException, (&_e)->what());
    return ;
  }
  
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_delete_1VectorStrings(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  std::vector< std::string > *arg1 = (std::vector< std::string > *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(std::vector< std::string > **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1GTAR(JNIEnv *jenv, jclass jcls, jstring jarg1, jint jarg2) {
  jlong jresult = 0 ;
  string *arg1 = 0 ;
  OpenMode arg2 ;
  GTAR *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  arg2 = (OpenMode)jarg2; 
  result = (GTAR *)new GTAR((string const &)*arg1,arg2);
  *(GTAR **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_GTAR_1close(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  GTAR *arg1 = (GTAR *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(GTAR **)&jarg1; 
  (arg1)->close();
}


SWIGEXPORT jbyteArray JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_GTAR_1readBytes(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  jbyteArray jresult = 0 ;
  GTAR *arg1 = (GTAR *) 0 ;
  string *arg2 = 0 ;
  SharedArray< char > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(GTAR **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  result = (arg1)->readBytes((string const &)*arg2);
  {
    jresult = jenv->NewByteArray((&result)->size());
    jenv->SetByteArrayRegion(jresult, 0, (&result)->size(), (const jbyte*) (&result)->get());
  }
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_GTAR_1getRecordTypes(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  GTAR *arg1 = (GTAR *) 0 ;
  std::vector< Record > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(GTAR **)&jarg1; 
  result = ((GTAR const *)arg1)->getRecordTypes();
  *(std::vector< Record > **)&jresult = new std::vector< Record >((const std::vector< Record > &)result); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_GTAR_1queryFrames(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  jlong jresult = 0 ;
  GTAR *arg1 = (GTAR *) 0 ;
  Record *arg2 = 0 ;
  std::vector< std::string > result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(GTAR **)&jarg1; 
  arg2 = *(Record **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Record const & reference is null");
    return 0;
  } 
  result = ((GTAR const *)arg1)->queryFrames((Record const &)*arg2);
  *(std::vector< std::string > **)&jresult = new std::vector< std::string >((const std::vector< std::string > &)result); 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_delete_1GTAR(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  GTAR *arg1 = (GTAR *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(GTAR **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1Record_1_1SWIG_10(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Record *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Record *)new Record();
  *(Record **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1Record_1_1SWIG_11(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  string *arg1 = 0 ;
  Record *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  result = (Record *)new Record((string const &)*arg1);
  *(Record **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1Record_1_1SWIG_12(JNIEnv *jenv, jclass jcls, jstring jarg1, jstring jarg2, jstring jarg3, jint jarg4, jint jarg5, jint jarg6) {
  jlong jresult = 0 ;
  string *arg1 = 0 ;
  string *arg2 = 0 ;
  string *arg3 = 0 ;
  Behavior arg4 ;
  Format arg5 ;
  Resolution arg6 ;
  Record *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  if(!jarg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg1_pstr = (const char *)jenv->GetStringUTFChars(jarg1, 0); 
  if (!arg1_pstr) return 0;
  string arg1_str(arg1_pstr);
  arg1 = &arg1_str;
  jenv->ReleaseStringUTFChars(jarg1, arg1_pstr); 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return 0;
  string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  if(!jarg3) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return 0;
  }
  const char *arg3_pstr = (const char *)jenv->GetStringUTFChars(jarg3, 0); 
  if (!arg3_pstr) return 0;
  string arg3_str(arg3_pstr);
  arg3 = &arg3_str;
  jenv->ReleaseStringUTFChars(jarg3, arg3_pstr); 
  arg4 = (Behavior)jarg4; 
  arg5 = (Format)jarg5; 
  arg6 = (Resolution)jarg6; 
  result = (Record *)new Record((string const &)*arg1,(string const &)*arg2,(string const &)*arg3,arg4,arg5,arg6);
  *(Record **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_new_1Record_1_1SWIG_13(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Record *arg1 = 0 ;
  Record *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1;
  if (!arg1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Record const & reference is null");
    return 0;
  } 
  result = (Record *)new Record((Record const &)*arg1);
  *(Record **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1copy(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_) {
  Record *arg1 = (Record *) 0 ;
  Record *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg2_;
  arg1 = *(Record **)&jarg1; 
  arg2 = *(Record **)&jarg2;
  if (!arg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Record const & reference is null");
    return ;
  } 
  (arg1)->copy((Record const &)*arg2);
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1nullifyIndex(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = (arg1)->nullifyIndex();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1withNullifiedIndex(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  Record result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = ((Record const *)arg1)->withNullifiedIndex();
  *(Record **)&jresult = new Record((const Record &)result); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getPath(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = ((Record const *)arg1)->getPath();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getGroup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = ((Record const *)arg1)->getGroup();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getName(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = ((Record const *)arg1)->getName();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getIndex(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  string result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = ((Record const *)arg1)->getIndex();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getBehavior(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  Behavior result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = (Behavior)((Record const *)arg1)->getBehavior();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getFormat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  Format result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = (Format)((Record const *)arg1)->getFormat();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1getResolution(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Record *arg1 = (Record *) 0 ;
  Resolution result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  result = (Resolution)((Record const *)arg1)->getResolution();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_Record_1setIndex(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  Record *arg1 = (Record *) 0 ;
  string *arg2 = 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Record **)&jarg1; 
  if(!jarg2) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "null string");
    return ;
  }
  const char *arg2_pstr = (const char *)jenv->GetStringUTFChars(jarg2, 0); 
  if (!arg2_pstr) return ;
  string arg2_str(arg2_pstr);
  arg2 = &arg2_str;
  jenv->ReleaseStringUTFChars(jarg2, arg2_pstr); 
  (arg1)->setIndex((string const &)*arg2);
}


SWIGEXPORT void JNICALL Java_libgetar_1wrap_libgetar_1wrapJNI_delete_1Record(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Record *arg1 = (Record *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Record **)&jarg1; 
  delete arg1;
}


#ifdef __cplusplus
}
#endif

