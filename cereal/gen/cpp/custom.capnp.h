// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: custom.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#ifndef CAPNP_VERSION
#error "CAPNP_VERSION is not defined, is capnp/generated-header-support.h missing?"
#elif CAPNP_VERSION != 1000002
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


CAPNP_BEGIN_HEADER

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(81c2f05a394cf4af);
CAPNP_DECLARE_SCHEMA(aedffd8f31e7b55d);
CAPNP_DECLARE_SCHEMA(f35cc4560bbf6ec2);
CAPNP_DECLARE_SCHEMA(da96579883444c35);
CAPNP_DECLARE_SCHEMA(80ae746ee2596b11);
CAPNP_DECLARE_SCHEMA(a5cd762cd951a455);
CAPNP_DECLARE_SCHEMA(f98d843bfd7004a3);
CAPNP_DECLARE_SCHEMA(b86e6369214c01c8);
CAPNP_DECLARE_SCHEMA(f416ec09499d9d19);
CAPNP_DECLARE_SCHEMA(a1680744031fdb2d);

}  // namespace schemas
}  // namespace capnp

namespace cereal {

struct FrogPilotCarControl {
  FrogPilotCarControl() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(81c2f05a394cf4af, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct FrogPilotDeviceState {
  FrogPilotDeviceState() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(aedffd8f31e7b55d, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct FrogPilotNavigation {
  FrogPilotNavigation() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f35cc4560bbf6ec2, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct FrogPilotPlan {
  FrogPilotPlan() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(da96579883444c35, 7, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved4 {
  CustomReserved4() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(80ae746ee2596b11, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved5 {
  CustomReserved5() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a5cd762cd951a455, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved6 {
  CustomReserved6() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f98d843bfd7004a3, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved7 {
  CustomReserved7() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(b86e6369214c01c8, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved8 {
  CustomReserved8() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f416ec09499d9d19, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CustomReserved9 {
  CustomReserved9() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(a1680744031fdb2d, 0, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class FrogPilotCarControl::Reader {
public:
  typedef FrogPilotCarControl Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool getAlwaysOnLateral() const;

  inline bool getSpeedLimitChanged() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class FrogPilotCarControl::Builder {
public:
  typedef FrogPilotCarControl Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool getAlwaysOnLateral();
  inline void setAlwaysOnLateral(bool value);

  inline bool getSpeedLimitChanged();
  inline void setSpeedLimitChanged(bool value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class FrogPilotCarControl::Pipeline {
public:
  typedef FrogPilotCarControl Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class FrogPilotDeviceState::Reader {
public:
  typedef FrogPilotDeviceState Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::int16_t getFreeSpace() const;

  inline  ::int16_t getUsedSpace() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class FrogPilotDeviceState::Builder {
public:
  typedef FrogPilotDeviceState Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::int16_t getFreeSpace();
  inline void setFreeSpace( ::int16_t value);

  inline  ::int16_t getUsedSpace();
  inline void setUsedSpace( ::int16_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class FrogPilotDeviceState::Pipeline {
public:
  typedef FrogPilotDeviceState Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class FrogPilotNavigation::Reader {
public:
  typedef FrogPilotNavigation Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool getApproachingIntersection() const;

  inline bool getApproachingTurn() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class FrogPilotNavigation::Builder {
public:
  typedef FrogPilotNavigation Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool getApproachingIntersection();
  inline void setApproachingIntersection(bool value);

  inline bool getApproachingTurn();
  inline void setApproachingTurn(bool value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class FrogPilotNavigation::Pipeline {
public:
  typedef FrogPilotNavigation Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class FrogPilotPlan::Reader {
public:
  typedef FrogPilotPlan Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline double getAdjustedCruise() const;

  inline bool getConditionalExperimental() const;

  inline  ::int16_t getDesiredFollowDistance() const;

  inline float getLaneWidthLeft() const;

  inline float getLaneWidthRight() const;

  inline bool getRedLight() const;

  inline  ::int16_t getSafeObstacleDistance() const;

  inline  ::int16_t getSafeObstacleDistanceStock() const;

  inline bool getSlcOverridden() const;

  inline double getSlcOverriddenSpeed() const;

  inline double getSlcSpeedLimit() const;

  inline float getSlcSpeedLimitOffset() const;

  inline  ::int16_t getStoppedEquivalenceFactor() const;

  inline double getUnconfirmedSlcSpeedLimit() const;

  inline bool getVtscControllingCurve() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class FrogPilotPlan::Builder {
public:
  typedef FrogPilotPlan Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline double getAdjustedCruise();
  inline void setAdjustedCruise(double value);

  inline bool getConditionalExperimental();
  inline void setConditionalExperimental(bool value);

  inline  ::int16_t getDesiredFollowDistance();
  inline void setDesiredFollowDistance( ::int16_t value);

  inline float getLaneWidthLeft();
  inline void setLaneWidthLeft(float value);

  inline float getLaneWidthRight();
  inline void setLaneWidthRight(float value);

  inline bool getRedLight();
  inline void setRedLight(bool value);

  inline  ::int16_t getSafeObstacleDistance();
  inline void setSafeObstacleDistance( ::int16_t value);

  inline  ::int16_t getSafeObstacleDistanceStock();
  inline void setSafeObstacleDistanceStock( ::int16_t value);

  inline bool getSlcOverridden();
  inline void setSlcOverridden(bool value);

  inline double getSlcOverriddenSpeed();
  inline void setSlcOverriddenSpeed(double value);

  inline double getSlcSpeedLimit();
  inline void setSlcSpeedLimit(double value);

  inline float getSlcSpeedLimitOffset();
  inline void setSlcSpeedLimitOffset(float value);

  inline  ::int16_t getStoppedEquivalenceFactor();
  inline void setStoppedEquivalenceFactor( ::int16_t value);

  inline double getUnconfirmedSlcSpeedLimit();
  inline void setUnconfirmedSlcSpeedLimit(double value);

  inline bool getVtscControllingCurve();
  inline void setVtscControllingCurve(bool value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class FrogPilotPlan::Pipeline {
public:
  typedef FrogPilotPlan Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved4::Reader {
public:
  typedef CustomReserved4 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved4::Builder {
public:
  typedef CustomReserved4 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved4::Pipeline {
public:
  typedef CustomReserved4 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved5::Reader {
public:
  typedef CustomReserved5 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved5::Builder {
public:
  typedef CustomReserved5 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved5::Pipeline {
public:
  typedef CustomReserved5 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved6::Reader {
public:
  typedef CustomReserved6 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved6::Builder {
public:
  typedef CustomReserved6 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved6::Pipeline {
public:
  typedef CustomReserved6 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved7::Reader {
public:
  typedef CustomReserved7 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved7::Builder {
public:
  typedef CustomReserved7 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved7::Pipeline {
public:
  typedef CustomReserved7 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved8::Reader {
public:
  typedef CustomReserved8 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved8::Builder {
public:
  typedef CustomReserved8 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved8::Pipeline {
public:
  typedef CustomReserved8 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CustomReserved9::Reader {
public:
  typedef CustomReserved9 Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CustomReserved9::Builder {
public:
  typedef CustomReserved9 Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CustomReserved9::Pipeline {
public:
  typedef CustomReserved9 Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool FrogPilotCarControl::Reader::getAlwaysOnLateral() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotCarControl::Builder::getAlwaysOnLateral() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void FrogPilotCarControl::Builder::setAlwaysOnLateral(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotCarControl::Reader::getSpeedLimitChanged() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotCarControl::Builder::getSpeedLimitChanged() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void FrogPilotCarControl::Builder::setSpeedLimitChanged(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotDeviceState::Reader::getFreeSpace() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotDeviceState::Builder::getFreeSpace() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void FrogPilotDeviceState::Builder::setFreeSpace( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotDeviceState::Reader::getUsedSpace() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotDeviceState::Builder::getUsedSpace() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void FrogPilotDeviceState::Builder::setUsedSpace( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotNavigation::Reader::getApproachingIntersection() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotNavigation::Builder::getApproachingIntersection() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void FrogPilotNavigation::Builder::setApproachingIntersection(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotNavigation::Reader::getApproachingTurn() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotNavigation::Builder::getApproachingTurn() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void FrogPilotNavigation::Builder::setApproachingTurn(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline double FrogPilotPlan::Reader::getAdjustedCruise() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline double FrogPilotPlan::Builder::getAdjustedCruise() {
  return _builder.getDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setAdjustedCruise(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotPlan::Reader::getConditionalExperimental() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotPlan::Builder::getConditionalExperimental() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setConditionalExperimental(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotPlan::Reader::getDesiredFollowDistance() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotPlan::Builder::getDesiredFollowDistance() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setDesiredFollowDistance( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline float FrogPilotPlan::Reader::getLaneWidthLeft() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline float FrogPilotPlan::Builder::getLaneWidthLeft() {
  return _builder.getDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setLaneWidthLeft(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline float FrogPilotPlan::Reader::getLaneWidthRight() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline float FrogPilotPlan::Builder::getLaneWidthRight() {
  return _builder.getDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setLaneWidthRight(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotPlan::Reader::getRedLight() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotPlan::Builder::getRedLight() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setRedLight(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotPlan::Reader::getSafeObstacleDistance() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotPlan::Builder::getSafeObstacleDistance() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSafeObstacleDistance( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotPlan::Reader::getSafeObstacleDistanceStock() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotPlan::Builder::getSafeObstacleDistanceStock() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSafeObstacleDistanceStock( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotPlan::Reader::getSlcOverridden() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotPlan::Builder::getSlcOverridden() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSlcOverridden(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS, value);
}

inline double FrogPilotPlan::Reader::getSlcOverriddenSpeed() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline double FrogPilotPlan::Builder::getSlcOverriddenSpeed() {
  return _builder.getDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSlcOverriddenSpeed(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline double FrogPilotPlan::Reader::getSlcSpeedLimit() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline double FrogPilotPlan::Builder::getSlcSpeedLimit() {
  return _builder.getDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSlcSpeedLimit(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline float FrogPilotPlan::Reader::getSlcSpeedLimitOffset() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline float FrogPilotPlan::Builder::getSlcSpeedLimitOffset() {
  return _builder.getDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setSlcSpeedLimitOffset(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline  ::int16_t FrogPilotPlan::Reader::getStoppedEquivalenceFactor() const {
  return _reader.getDataField< ::int16_t>(
      ::capnp::bounded<22>() * ::capnp::ELEMENTS);
}

inline  ::int16_t FrogPilotPlan::Builder::getStoppedEquivalenceFactor() {
  return _builder.getDataField< ::int16_t>(
      ::capnp::bounded<22>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setStoppedEquivalenceFactor( ::int16_t value) {
  _builder.setDataField< ::int16_t>(
      ::capnp::bounded<22>() * ::capnp::ELEMENTS, value);
}

inline double FrogPilotPlan::Reader::getUnconfirmedSlcSpeedLimit() const {
  return _reader.getDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline double FrogPilotPlan::Builder::getUnconfirmedSlcSpeedLimit() {
  return _builder.getDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setUnconfirmedSlcSpeedLimit(double value) {
  _builder.setDataField<double>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline bool FrogPilotPlan::Reader::getVtscControllingCurve() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS);
}

inline bool FrogPilotPlan::Builder::getVtscControllingCurve() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS);
}
inline void FrogPilotPlan::Builder::setVtscControllingCurve(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS, value);
}

}  // namespace

CAPNP_END_HEADER
