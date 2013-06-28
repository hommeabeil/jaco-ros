/* Auto-generated by genmsg_cpp for file /home/jschmidt/ros/ros-jaco-arm/jaco_driver/srv/Estart.srv */
#ifndef JACO_DRIVER_SERVICE_ESTART_H
#define JACO_DRIVER_SERVICE_ESTART_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace jaco_driver
{
template <class ContainerAllocator>
struct EstartRequest_ {
  typedef EstartRequest_<ContainerAllocator> Type;

  EstartRequest_()
  {
  }

  EstartRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::jaco_driver::EstartRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jaco_driver::EstartRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct EstartRequest
typedef  ::jaco_driver::EstartRequest_<std::allocator<void> > EstartRequest;

typedef boost::shared_ptr< ::jaco_driver::EstartRequest> EstartRequestPtr;
typedef boost::shared_ptr< ::jaco_driver::EstartRequest const> EstartRequestConstPtr;


template <class ContainerAllocator>
struct EstartResponse_ {
  typedef EstartResponse_<ContainerAllocator> Type;

  EstartResponse_()
  : estart_result()
  {
  }

  EstartResponse_(const ContainerAllocator& _alloc)
  : estart_result(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _estart_result_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  estart_result;


  typedef boost::shared_ptr< ::jaco_driver::EstartResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::jaco_driver::EstartResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct EstartResponse
typedef  ::jaco_driver::EstartResponse_<std::allocator<void> > EstartResponse;

typedef boost::shared_ptr< ::jaco_driver::EstartResponse> EstartResponsePtr;
typedef boost::shared_ptr< ::jaco_driver::EstartResponse const> EstartResponseConstPtr;

struct Estart
{

typedef EstartRequest Request;
typedef EstartResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct Estart
} // namespace jaco_driver

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::jaco_driver::EstartRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::jaco_driver::EstartRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::jaco_driver::EstartRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::jaco_driver::EstartRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::jaco_driver::EstartRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "jaco_driver/EstartRequest";
  }

  static const char* value(const  ::jaco_driver::EstartRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::jaco_driver::EstartRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
";
  }

  static const char* value(const  ::jaco_driver::EstartRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::jaco_driver::EstartRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::jaco_driver::EstartResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::jaco_driver::EstartResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::jaco_driver::EstartResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "869d428a7dc3ab7bd4a9c986929fc210";
  }

  static const char* value(const  ::jaco_driver::EstartResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x869d428a7dc3ab7bULL;
  static const uint64_t static_value2 = 0xd4a9c986929fc210ULL;
};

template<class ContainerAllocator>
struct DataType< ::jaco_driver::EstartResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "jaco_driver/EstartResponse";
  }

  static const char* value(const  ::jaco_driver::EstartResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::jaco_driver::EstartResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "string estart_result\n\
\n\
\n\
";
  }

  static const char* value(const  ::jaco_driver::EstartResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::jaco_driver::EstartRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct EstartRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::jaco_driver::EstartResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.estart_result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct EstartResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<jaco_driver::Estart> {
  static const char* value() 
  {
    return "869d428a7dc3ab7bd4a9c986929fc210";
  }

  static const char* value(const jaco_driver::Estart&) { return value(); } 
};

template<>
struct DataType<jaco_driver::Estart> {
  static const char* value() 
  {
    return "jaco_driver/Estart";
  }

  static const char* value(const jaco_driver::Estart&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<jaco_driver::EstartRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "869d428a7dc3ab7bd4a9c986929fc210";
  }

  static const char* value(const jaco_driver::EstartRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<jaco_driver::EstartRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "jaco_driver/Estart";
  }

  static const char* value(const jaco_driver::EstartRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<jaco_driver::EstartResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "869d428a7dc3ab7bd4a9c986929fc210";
  }

  static const char* value(const jaco_driver::EstartResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<jaco_driver::EstartResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "jaco_driver/Estart";
  }

  static const char* value(const jaco_driver::EstartResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // JACO_DRIVER_SERVICE_ESTART_H
