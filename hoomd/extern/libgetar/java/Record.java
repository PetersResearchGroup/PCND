/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package libgetar_wrap;

public class Record {
  private long swigCPtr;
  protected boolean swigCMemOwn;

  protected Record(long cPtr, boolean cMemoryOwn) {
    swigCMemOwn = cMemoryOwn;
    swigCPtr = cPtr;
  }

  protected static long getCPtr(Record obj) {
    return (obj == null) ? 0 : obj.swigCPtr;
  }

  protected void finalize() {
    delete();
  }

  public synchronized void delete() {
    if (swigCPtr != 0) {
      if (swigCMemOwn) {
        swigCMemOwn = false;
        libgetar_wrapJNI.delete_Record(swigCPtr);
      }
      swigCPtr = 0;
    }
  }

  public Record() {
    this(libgetar_wrapJNI.new_Record__SWIG_0(), true);
  }

  public Record(String path) {
    this(libgetar_wrapJNI.new_Record__SWIG_1(path), true);
  }

  public Record(String group, String name, String index, Behavior behavior, Format format, Resolution resolution) {
    this(libgetar_wrapJNI.new_Record__SWIG_2(group, name, index, behavior.swigValue(), format.swigValue(), resolution.swigValue()), true);
  }

  public Record(Record rhs) {
    this(libgetar_wrapJNI.new_Record__SWIG_3(Record.getCPtr(rhs), rhs), true);
  }

  public void copy(Record rhs) {
    libgetar_wrapJNI.Record_copy(swigCPtr, this, Record.getCPtr(rhs), rhs);
  }

  public String nullifyIndex() {
    return libgetar_wrapJNI.Record_nullifyIndex(swigCPtr, this);
  }

  public Record withNullifiedIndex() {
    return new Record(libgetar_wrapJNI.Record_withNullifiedIndex(swigCPtr, this), true);
  }

  public String getPath() {
    return libgetar_wrapJNI.Record_getPath(swigCPtr, this);
  }

  public String getGroup() {
    return libgetar_wrapJNI.Record_getGroup(swigCPtr, this);
  }

  public String getName() {
    return libgetar_wrapJNI.Record_getName(swigCPtr, this);
  }

  public String getIndex() {
    return libgetar_wrapJNI.Record_getIndex(swigCPtr, this);
  }

  public Behavior getBehavior() {
    return Behavior.swigToEnum(libgetar_wrapJNI.Record_getBehavior(swigCPtr, this));
  }

  public Format getFormat() {
    return Format.swigToEnum(libgetar_wrapJNI.Record_getFormat(swigCPtr, this));
  }

  public Resolution getResolution() {
    return Resolution.swigToEnum(libgetar_wrapJNI.Record_getResolution(swigCPtr, this));
  }

  public void setIndex(String index) {
    libgetar_wrapJNI.Record_setIndex(swigCPtr, this, index);
  }

}
