/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef CVRPSolver_H
#define CVRPSolver_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "cvrptwpd_types.h"



#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class CVRPSolverIf {
 public:
  virtual ~CVRPSolverIf() {}
  virtual void solveCVRP(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps) = 0;
  virtual void solveCVRPTW(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime) = 0;
  virtual void solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots) = 0;
  virtual void solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs) = 0;
};

class CVRPSolverIfFactory {
 public:
  typedef CVRPSolverIf Handler;

  virtual ~CVRPSolverIfFactory() {}

  virtual CVRPSolverIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(CVRPSolverIf* /* handler */) = 0;
};

class CVRPSolverIfSingletonFactory : virtual public CVRPSolverIfFactory {
 public:
  CVRPSolverIfSingletonFactory(const boost::shared_ptr<CVRPSolverIf>& iface) : iface_(iface) {}
  virtual ~CVRPSolverIfSingletonFactory() {}

  virtual CVRPSolverIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(CVRPSolverIf* /* handler */) {}

 protected:
  boost::shared_ptr<CVRPSolverIf> iface_;
};

class CVRPSolverNull : virtual public CVRPSolverIf {
 public:
  virtual ~CVRPSolverNull() {}
  void solveCVRP(std::vector<std::vector<int64_t> > & /* _return */, const std::vector<std::vector<int64_t> > & /* vec */, const std::vector<int64_t> & /* demands */, const std::vector<int64_t> & /* v_caps */) {
    return;
  }
  void solveCVRPTW(std::vector<std::vector<int64_t> > & /* _return */, const std::vector<std::vector<int64_t> > & /* vec */, const std::vector<int64_t> & /* demands */, const std::vector<int64_t> & /* v_caps */, const std::vector<std::vector<int64_t> > & /* timeWindows */, const std::vector<int64_t> & /* serviceTime */) {
    return;
  }
  void solveCVRPTWMD(std::vector<std::vector<int64_t> > & /* _return */, const std::vector<std::vector<int64_t> > & /* vec */, const std::vector<int64_t> & /* demands */, const std::vector<int64_t> & /* v_caps */, const std::vector<std::vector<int64_t> > & /* timeWindows */, const std::vector<int64_t> & /* serviceTime */, const std::vector<std::vector<int64_t> > & /* depots */) {
    return;
  }
  void solveCVRPTWPD(std::vector<std::vector<int64_t> > & /* _return */, const std::vector<std::vector<int64_t> > & /* vec */, const std::vector<int64_t> & /* demands */, const std::vector<int64_t> & /* v_caps */, const std::vector<std::vector<int64_t> > & /* timeWindows */, const std::vector<int64_t> & /* serviceTime */, const std::vector<int64_t> & /* pickups */, const std::vector<int64_t> & /* delivs */) {
    return;
  }
};

typedef struct _CVRPSolver_solveCVRP_args__isset {
  _CVRPSolver_solveCVRP_args__isset() : vec(false), demands(false), v_caps(false) {}
  bool vec :1;
  bool demands :1;
  bool v_caps :1;
} _CVRPSolver_solveCVRP_args__isset;

class CVRPSolver_solveCVRP_args {
 public:

  CVRPSolver_solveCVRP_args(const CVRPSolver_solveCVRP_args&);
  CVRPSolver_solveCVRP_args& operator=(const CVRPSolver_solveCVRP_args&);
  CVRPSolver_solveCVRP_args() {
  }

  virtual ~CVRPSolver_solveCVRP_args() throw();
  std::vector<std::vector<int64_t> >  vec;
  std::vector<int64_t>  demands;
  std::vector<int64_t>  v_caps;

  _CVRPSolver_solveCVRP_args__isset __isset;

  void __set_vec(const std::vector<std::vector<int64_t> > & val);

  void __set_demands(const std::vector<int64_t> & val);

  void __set_v_caps(const std::vector<int64_t> & val);

  bool operator == (const CVRPSolver_solveCVRP_args & rhs) const
  {
    if (!(vec == rhs.vec))
      return false;
    if (!(demands == rhs.demands))
      return false;
    if (!(v_caps == rhs.v_caps))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRP_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRP_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CVRPSolver_solveCVRP_pargs {
 public:


  virtual ~CVRPSolver_solveCVRP_pargs() throw();
  const std::vector<std::vector<int64_t> > * vec;
  const std::vector<int64_t> * demands;
  const std::vector<int64_t> * v_caps;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRP_result__isset {
  _CVRPSolver_solveCVRP_result__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRP_result__isset;

class CVRPSolver_solveCVRP_result {
 public:

  CVRPSolver_solveCVRP_result(const CVRPSolver_solveCVRP_result&);
  CVRPSolver_solveCVRP_result& operator=(const CVRPSolver_solveCVRP_result&);
  CVRPSolver_solveCVRP_result() {
  }

  virtual ~CVRPSolver_solveCVRP_result() throw();
  std::vector<std::vector<int64_t> >  success;

  _CVRPSolver_solveCVRP_result__isset __isset;

  void __set_success(const std::vector<std::vector<int64_t> > & val);

  bool operator == (const CVRPSolver_solveCVRP_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRP_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRP_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRP_presult__isset {
  _CVRPSolver_solveCVRP_presult__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRP_presult__isset;

class CVRPSolver_solveCVRP_presult {
 public:


  virtual ~CVRPSolver_solveCVRP_presult() throw();
  std::vector<std::vector<int64_t> > * success;

  _CVRPSolver_solveCVRP_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CVRPSolver_solveCVRPTW_args__isset {
  _CVRPSolver_solveCVRPTW_args__isset() : vec(false), demands(false), v_caps(false), timeWindows(false), serviceTime(false) {}
  bool vec :1;
  bool demands :1;
  bool v_caps :1;
  bool timeWindows :1;
  bool serviceTime :1;
} _CVRPSolver_solveCVRPTW_args__isset;

class CVRPSolver_solveCVRPTW_args {
 public:

  CVRPSolver_solveCVRPTW_args(const CVRPSolver_solveCVRPTW_args&);
  CVRPSolver_solveCVRPTW_args& operator=(const CVRPSolver_solveCVRPTW_args&);
  CVRPSolver_solveCVRPTW_args() {
  }

  virtual ~CVRPSolver_solveCVRPTW_args() throw();
  std::vector<std::vector<int64_t> >  vec;
  std::vector<int64_t>  demands;
  std::vector<int64_t>  v_caps;
  std::vector<std::vector<int64_t> >  timeWindows;
  std::vector<int64_t>  serviceTime;

  _CVRPSolver_solveCVRPTW_args__isset __isset;

  void __set_vec(const std::vector<std::vector<int64_t> > & val);

  void __set_demands(const std::vector<int64_t> & val);

  void __set_v_caps(const std::vector<int64_t> & val);

  void __set_timeWindows(const std::vector<std::vector<int64_t> > & val);

  void __set_serviceTime(const std::vector<int64_t> & val);

  bool operator == (const CVRPSolver_solveCVRPTW_args & rhs) const
  {
    if (!(vec == rhs.vec))
      return false;
    if (!(demands == rhs.demands))
      return false;
    if (!(v_caps == rhs.v_caps))
      return false;
    if (!(timeWindows == rhs.timeWindows))
      return false;
    if (!(serviceTime == rhs.serviceTime))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTW_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTW_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CVRPSolver_solveCVRPTW_pargs {
 public:


  virtual ~CVRPSolver_solveCVRPTW_pargs() throw();
  const std::vector<std::vector<int64_t> > * vec;
  const std::vector<int64_t> * demands;
  const std::vector<int64_t> * v_caps;
  const std::vector<std::vector<int64_t> > * timeWindows;
  const std::vector<int64_t> * serviceTime;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTW_result__isset {
  _CVRPSolver_solveCVRPTW_result__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTW_result__isset;

class CVRPSolver_solveCVRPTW_result {
 public:

  CVRPSolver_solveCVRPTW_result(const CVRPSolver_solveCVRPTW_result&);
  CVRPSolver_solveCVRPTW_result& operator=(const CVRPSolver_solveCVRPTW_result&);
  CVRPSolver_solveCVRPTW_result() {
  }

  virtual ~CVRPSolver_solveCVRPTW_result() throw();
  std::vector<std::vector<int64_t> >  success;

  _CVRPSolver_solveCVRPTW_result__isset __isset;

  void __set_success(const std::vector<std::vector<int64_t> > & val);

  bool operator == (const CVRPSolver_solveCVRPTW_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTW_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTW_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTW_presult__isset {
  _CVRPSolver_solveCVRPTW_presult__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTW_presult__isset;

class CVRPSolver_solveCVRPTW_presult {
 public:


  virtual ~CVRPSolver_solveCVRPTW_presult() throw();
  std::vector<std::vector<int64_t> > * success;

  _CVRPSolver_solveCVRPTW_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CVRPSolver_solveCVRPTWMD_args__isset {
  _CVRPSolver_solveCVRPTWMD_args__isset() : vec(false), demands(false), v_caps(false), timeWindows(false), serviceTime(false), depots(false) {}
  bool vec :1;
  bool demands :1;
  bool v_caps :1;
  bool timeWindows :1;
  bool serviceTime :1;
  bool depots :1;
} _CVRPSolver_solveCVRPTWMD_args__isset;

class CVRPSolver_solveCVRPTWMD_args {
 public:

  CVRPSolver_solveCVRPTWMD_args(const CVRPSolver_solveCVRPTWMD_args&);
  CVRPSolver_solveCVRPTWMD_args& operator=(const CVRPSolver_solveCVRPTWMD_args&);
  CVRPSolver_solveCVRPTWMD_args() {
  }

  virtual ~CVRPSolver_solveCVRPTWMD_args() throw();
  std::vector<std::vector<int64_t> >  vec;
  std::vector<int64_t>  demands;
  std::vector<int64_t>  v_caps;
  std::vector<std::vector<int64_t> >  timeWindows;
  std::vector<int64_t>  serviceTime;
  std::vector<std::vector<int64_t> >  depots;

  _CVRPSolver_solveCVRPTWMD_args__isset __isset;

  void __set_vec(const std::vector<std::vector<int64_t> > & val);

  void __set_demands(const std::vector<int64_t> & val);

  void __set_v_caps(const std::vector<int64_t> & val);

  void __set_timeWindows(const std::vector<std::vector<int64_t> > & val);

  void __set_serviceTime(const std::vector<int64_t> & val);

  void __set_depots(const std::vector<std::vector<int64_t> > & val);

  bool operator == (const CVRPSolver_solveCVRPTWMD_args & rhs) const
  {
    if (!(vec == rhs.vec))
      return false;
    if (!(demands == rhs.demands))
      return false;
    if (!(v_caps == rhs.v_caps))
      return false;
    if (!(timeWindows == rhs.timeWindows))
      return false;
    if (!(serviceTime == rhs.serviceTime))
      return false;
    if (!(depots == rhs.depots))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTWMD_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTWMD_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CVRPSolver_solveCVRPTWMD_pargs {
 public:


  virtual ~CVRPSolver_solveCVRPTWMD_pargs() throw();
  const std::vector<std::vector<int64_t> > * vec;
  const std::vector<int64_t> * demands;
  const std::vector<int64_t> * v_caps;
  const std::vector<std::vector<int64_t> > * timeWindows;
  const std::vector<int64_t> * serviceTime;
  const std::vector<std::vector<int64_t> > * depots;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTWMD_result__isset {
  _CVRPSolver_solveCVRPTWMD_result__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTWMD_result__isset;

class CVRPSolver_solveCVRPTWMD_result {
 public:

  CVRPSolver_solveCVRPTWMD_result(const CVRPSolver_solveCVRPTWMD_result&);
  CVRPSolver_solveCVRPTWMD_result& operator=(const CVRPSolver_solveCVRPTWMD_result&);
  CVRPSolver_solveCVRPTWMD_result() {
  }

  virtual ~CVRPSolver_solveCVRPTWMD_result() throw();
  std::vector<std::vector<int64_t> >  success;

  _CVRPSolver_solveCVRPTWMD_result__isset __isset;

  void __set_success(const std::vector<std::vector<int64_t> > & val);

  bool operator == (const CVRPSolver_solveCVRPTWMD_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTWMD_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTWMD_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTWMD_presult__isset {
  _CVRPSolver_solveCVRPTWMD_presult__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTWMD_presult__isset;

class CVRPSolver_solveCVRPTWMD_presult {
 public:


  virtual ~CVRPSolver_solveCVRPTWMD_presult() throw();
  std::vector<std::vector<int64_t> > * success;

  _CVRPSolver_solveCVRPTWMD_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _CVRPSolver_solveCVRPTWPD_args__isset {
  _CVRPSolver_solveCVRPTWPD_args__isset() : vec(false), demands(false), v_caps(false), timeWindows(false), serviceTime(false), pickups(false), delivs(false) {}
  bool vec :1;
  bool demands :1;
  bool v_caps :1;
  bool timeWindows :1;
  bool serviceTime :1;
  bool pickups :1;
  bool delivs :1;
} _CVRPSolver_solveCVRPTWPD_args__isset;

class CVRPSolver_solveCVRPTWPD_args {
 public:

  CVRPSolver_solveCVRPTWPD_args(const CVRPSolver_solveCVRPTWPD_args&);
  CVRPSolver_solveCVRPTWPD_args& operator=(const CVRPSolver_solveCVRPTWPD_args&);
  CVRPSolver_solveCVRPTWPD_args() {
  }

  virtual ~CVRPSolver_solveCVRPTWPD_args() throw();
  std::vector<std::vector<int64_t> >  vec;
  std::vector<int64_t>  demands;
  std::vector<int64_t>  v_caps;
  std::vector<std::vector<int64_t> >  timeWindows;
  std::vector<int64_t>  serviceTime;
  std::vector<int64_t>  pickups;
  std::vector<int64_t>  delivs;

  _CVRPSolver_solveCVRPTWPD_args__isset __isset;

  void __set_vec(const std::vector<std::vector<int64_t> > & val);

  void __set_demands(const std::vector<int64_t> & val);

  void __set_v_caps(const std::vector<int64_t> & val);

  void __set_timeWindows(const std::vector<std::vector<int64_t> > & val);

  void __set_serviceTime(const std::vector<int64_t> & val);

  void __set_pickups(const std::vector<int64_t> & val);

  void __set_delivs(const std::vector<int64_t> & val);

  bool operator == (const CVRPSolver_solveCVRPTWPD_args & rhs) const
  {
    if (!(vec == rhs.vec))
      return false;
    if (!(demands == rhs.demands))
      return false;
    if (!(v_caps == rhs.v_caps))
      return false;
    if (!(timeWindows == rhs.timeWindows))
      return false;
    if (!(serviceTime == rhs.serviceTime))
      return false;
    if (!(pickups == rhs.pickups))
      return false;
    if (!(delivs == rhs.delivs))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTWPD_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTWPD_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class CVRPSolver_solveCVRPTWPD_pargs {
 public:


  virtual ~CVRPSolver_solveCVRPTWPD_pargs() throw();
  const std::vector<std::vector<int64_t> > * vec;
  const std::vector<int64_t> * demands;
  const std::vector<int64_t> * v_caps;
  const std::vector<std::vector<int64_t> > * timeWindows;
  const std::vector<int64_t> * serviceTime;
  const std::vector<int64_t> * pickups;
  const std::vector<int64_t> * delivs;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTWPD_result__isset {
  _CVRPSolver_solveCVRPTWPD_result__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTWPD_result__isset;

class CVRPSolver_solveCVRPTWPD_result {
 public:

  CVRPSolver_solveCVRPTWPD_result(const CVRPSolver_solveCVRPTWPD_result&);
  CVRPSolver_solveCVRPTWPD_result& operator=(const CVRPSolver_solveCVRPTWPD_result&);
  CVRPSolver_solveCVRPTWPD_result() {
  }

  virtual ~CVRPSolver_solveCVRPTWPD_result() throw();
  std::vector<std::vector<int64_t> >  success;

  _CVRPSolver_solveCVRPTWPD_result__isset __isset;

  void __set_success(const std::vector<std::vector<int64_t> > & val);

  bool operator == (const CVRPSolver_solveCVRPTWPD_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const CVRPSolver_solveCVRPTWPD_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const CVRPSolver_solveCVRPTWPD_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _CVRPSolver_solveCVRPTWPD_presult__isset {
  _CVRPSolver_solveCVRPTWPD_presult__isset() : success(false) {}
  bool success :1;
} _CVRPSolver_solveCVRPTWPD_presult__isset;

class CVRPSolver_solveCVRPTWPD_presult {
 public:


  virtual ~CVRPSolver_solveCVRPTWPD_presult() throw();
  std::vector<std::vector<int64_t> > * success;

  _CVRPSolver_solveCVRPTWPD_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class CVRPSolverClient : virtual public CVRPSolverIf {
 public:
  CVRPSolverClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CVRPSolverClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void solveCVRP(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps);
  void send_solveCVRP(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps);
  void recv_solveCVRP(std::vector<std::vector<int64_t> > & _return);
  void solveCVRPTW(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime);
  void send_solveCVRPTW(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime);
  void recv_solveCVRPTW(std::vector<std::vector<int64_t> > & _return);
  void solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots);
  void send_solveCVRPTWMD(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots);
  void recv_solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return);
  void solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs);
  void send_solveCVRPTWPD(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs);
  void recv_solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class CVRPSolverProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<CVRPSolverIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (CVRPSolverProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_solveCVRP(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_solveCVRPTW(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_solveCVRPTWMD(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_solveCVRPTWPD(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  CVRPSolverProcessor(boost::shared_ptr<CVRPSolverIf> iface) :
    iface_(iface) {
    processMap_["solveCVRP"] = &CVRPSolverProcessor::process_solveCVRP;
    processMap_["solveCVRPTW"] = &CVRPSolverProcessor::process_solveCVRPTW;
    processMap_["solveCVRPTWMD"] = &CVRPSolverProcessor::process_solveCVRPTWMD;
    processMap_["solveCVRPTWPD"] = &CVRPSolverProcessor::process_solveCVRPTWPD;
  }

  virtual ~CVRPSolverProcessor() {}
};

class CVRPSolverProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  CVRPSolverProcessorFactory(const ::boost::shared_ptr< CVRPSolverIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< CVRPSolverIfFactory > handlerFactory_;
};

class CVRPSolverMultiface : virtual public CVRPSolverIf {
 public:
  CVRPSolverMultiface(std::vector<boost::shared_ptr<CVRPSolverIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~CVRPSolverMultiface() {}
 protected:
  std::vector<boost::shared_ptr<CVRPSolverIf> > ifaces_;
  CVRPSolverMultiface() {}
  void add(boost::shared_ptr<CVRPSolverIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void solveCVRP(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->solveCVRP(_return, vec, demands, v_caps);
    }
    ifaces_[i]->solveCVRP(_return, vec, demands, v_caps);
    return;
  }

  void solveCVRPTW(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->solveCVRPTW(_return, vec, demands, v_caps, timeWindows, serviceTime);
    }
    ifaces_[i]->solveCVRPTW(_return, vec, demands, v_caps, timeWindows, serviceTime);
    return;
  }

  void solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->solveCVRPTWMD(_return, vec, demands, v_caps, timeWindows, serviceTime, depots);
    }
    ifaces_[i]->solveCVRPTWMD(_return, vec, demands, v_caps, timeWindows, serviceTime, depots);
    return;
  }

  void solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->solveCVRPTWPD(_return, vec, demands, v_caps, timeWindows, serviceTime, pickups, delivs);
    }
    ifaces_[i]->solveCVRPTWPD(_return, vec, demands, v_caps, timeWindows, serviceTime, pickups, delivs);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class CVRPSolverConcurrentClient : virtual public CVRPSolverIf {
 public:
  CVRPSolverConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  CVRPSolverConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void solveCVRP(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps);
  int32_t send_solveCVRP(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps);
  void recv_solveCVRP(std::vector<std::vector<int64_t> > & _return, const int32_t seqid);
  void solveCVRPTW(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime);
  int32_t send_solveCVRPTW(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime);
  void recv_solveCVRPTW(std::vector<std::vector<int64_t> > & _return, const int32_t seqid);
  void solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots);
  int32_t send_solveCVRPTWMD(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<std::vector<int64_t> > & depots);
  void recv_solveCVRPTWMD(std::vector<std::vector<int64_t> > & _return, const int32_t seqid);
  void solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return, const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs);
  int32_t send_solveCVRPTWPD(const std::vector<std::vector<int64_t> > & vec, const std::vector<int64_t> & demands, const std::vector<int64_t> & v_caps, const std::vector<std::vector<int64_t> > & timeWindows, const std::vector<int64_t> & serviceTime, const std::vector<int64_t> & pickups, const std::vector<int64_t> & delivs);
  void recv_solveCVRPTWPD(std::vector<std::vector<int64_t> > & _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif



#endif
