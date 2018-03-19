/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package libgetar_wrap;

public class VectorRecords {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected VectorRecords(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(VectorRecords obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libgetar_wrapJNI.delete_VectorRecords(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public VectorRecords() {
    this(libgetar_wrapJNI.new_VectorRecords__SWIG_0(), true);
  }

  public VectorRecords(long n) {
    this(libgetar_wrapJNI.new_VectorRecords__SWIG_1(n), true);
  }

  public long size() {
    return libgetar_wrapJNI.VectorRecords_size(swigCPtr, this);
  }

  public long capacity() {
    return libgetar_wrapJNI.VectorRecords_capacity(swigCPtr, this);
  }

  public void reserve(long n) {
    libgetar_wrapJNI.VectorRecords_reserve(swigCPtr, this, n);
  }

  public boolean isEmpty() {
    return libgetar_wrapJNI.VectorRecords_isEmpty(swigCPtr, this);
  }

  public void clear() {
    libgetar_wrapJNI.VectorRecords_clear(swigCPtr, this);
  }

  public void add(Record x) {
    libgetar_wrapJNI.VectorRecords_add(swigCPtr, this, Record.getCPtr(x), x);
  }

  public Record get(int i) {
    return new Record(libgetar_wrapJNI.VectorRecords_get(swigCPtr, this, i), false);
  }

  public void set(int i, Record val) {
    libgetar_wrapJNI.VectorRecords_set(swigCPtr, this, i, Record.getCPtr(val), val);
  }

}