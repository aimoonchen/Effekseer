//------------------------------------------------------------------------------
// <auto-generated />
//
// This file was automatically generated by SWIG (http://www.swig.org).
// Version 4.0.2
//
// Do not make changes to this file unless you know what you are doing--modify
// the SWIG interface file instead.
//------------------------------------------------------------------------------

namespace Effekseer.swig {

public class Vector3F : global::System.IDisposable {
  private global::System.Runtime.InteropServices.HandleRef swigCPtr;
  protected bool swigCMemOwn;

  internal Vector3F(global::System.IntPtr cPtr, bool cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = new global::System.Runtime.InteropServices.HandleRef(this, cPtr);
  }

  internal static global::System.Runtime.InteropServices.HandleRef getCPtr(Vector3F obj) {
    return (obj == null) ? new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero) : obj.swigCPtr;
  }

  ~Vector3F() {
    Dispose(false);
  }

  public void Dispose() {
    Dispose(true);
    global::System.GC.SuppressFinalize(this);
  }

  protected virtual void Dispose(bool disposing) {
    lock(this) {
      if (swigCPtr.Handle != global::System.IntPtr.Zero) {
        if (swigCMemOwn) {
          swigCMemOwn = false;
          EffekseerNativePINVOKE.delete_Vector3F(swigCPtr);
        }
        swigCPtr = new global::System.Runtime.InteropServices.HandleRef(null, global::System.IntPtr.Zero);
      }
    }
  }

  public float X {
    set {
      EffekseerNativePINVOKE.Vector3F_X_set(swigCPtr, value);
    } 
    get {
      float ret = EffekseerNativePINVOKE.Vector3F_X_get(swigCPtr);
      return ret;
    } 
  }

  public float Y {
    set {
      EffekseerNativePINVOKE.Vector3F_Y_set(swigCPtr, value);
    } 
    get {
      float ret = EffekseerNativePINVOKE.Vector3F_Y_get(swigCPtr);
      return ret;
    } 
  }

  public float Z {
    set {
      EffekseerNativePINVOKE.Vector3F_Z_set(swigCPtr, value);
    } 
    get {
      float ret = EffekseerNativePINVOKE.Vector3F_Z_get(swigCPtr);
      return ret;
    } 
  }

  public Vector3F() : this(EffekseerNativePINVOKE.new_Vector3F__SWIG_0(), true) {
  }

  public Vector3F(float x, float y, float z) : this(EffekseerNativePINVOKE.new_Vector3F__SWIG_1(x, y, z), true) {
  }

}

}