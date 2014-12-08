#ifndef Electron_H
#define Electron_H

#include "Particle.h"
#include "FlavorParticle.h"

/**
 *  @short electron class
 *  @author Thomas Peiffer
 */

class Electron : public Particle{

 public:
  Electron(){
    m_vertex_x=0; 
    m_vertex_y=0; 
    m_vertex_z=0; 
    m_supercluster_eta=0; 
    m_supercluster_phi=0; 
    m_dB=0; 
    m_neutralHadronIso=0; 
    m_chargedHadronIso=0; 
    m_photonIso=0;
    m_trackIso=0; 
    m_puChargedHadronIso=0;
    m_gsfTrack_trackerExpectedHitsInner_numberOfLostHits=0;
    m_gsfTrack_px=0;
    m_gsfTrack_py=0;
    m_gsfTrack_pz=0;
    m_gsfTrack_vx=0;
    m_gsfTrack_vy=0;
    m_gsfTrack_vz=0;
    m_passconversionveto=false;
    m_dEtaIn=0;
    m_dPhiIn=0;
    m_sigmaIEtaIEta=0;
    m_HoverE=0;
    m_fbrem=0;
    m_EoverPIn=0;
    m_EcalEnergy=0;
    m_mvaTrigV0=0;
    m_mvaNonTrigV0=0;
    m_AEff=0;
  }

  float vertex_x() const{return m_vertex_x;} 
  float vertex_y() const{return m_vertex_y;} 
  float vertex_z() const{return m_vertex_z;} 
  float supercluster_eta() const{return m_supercluster_eta;} 
  float supercluster_phi() const{return m_supercluster_phi;} 
  float dB() const{return m_dB;} 
  float neutralHadronIso() const{return m_neutralHadronIso;} 
  float chargedHadronIso() const{return m_chargedHadronIso;} 
  float photonIso() const{return m_photonIso;}
  float trackIso() const{return m_trackIso;} 
  float puChargedHadronIso() const{return m_puChargedHadronIso;}
  int gsfTrack_trackerExpectedHitsInner_numberOfLostHits() const{return m_gsfTrack_trackerExpectedHitsInner_numberOfLostHits;}
  float gsfTrack_px() const{return m_gsfTrack_px;}
  float gsfTrack_py() const{return m_gsfTrack_py;}
  float gsfTrack_pz() const{return m_gsfTrack_pz;}
  float gsfTrack_vx() const{return m_gsfTrack_vx;}
  float gsfTrack_vy() const{return m_gsfTrack_vy;}
  float gsfTrack_vz() const{return m_gsfTrack_vz;}
  bool passconversionveto() const{return m_passconversionveto;}
  float dEtaIn() const{return m_dEtaIn;}
  float dPhiIn() const{return m_dPhiIn;} 
  float sigmaIEtaIEta() const{return m_sigmaIEtaIEta;} 
  float HoverE() const{return m_HoverE;}
  float fbrem() const{return m_fbrem;}
  float EoverPIn() const{return m_EoverPIn;}
  float EcalEnergy() const{return m_EcalEnergy;}
  float mvaTrigV0() const{return m_mvaTrigV0;}
  float mvaNonTrigV0() const{return m_mvaNonTrigV0;}
  float AEff() const{return m_AEff;}


  void set_vertex_x(float x){m_vertex_x=x;} 
  void set_vertex_y(float x){m_vertex_y=x;} 
  void set_vertex_z(float x){m_vertex_z=x;} 
  void set_supercluster_eta(float x){m_supercluster_eta=x;} 
  void set_supercluster_phi(float x){m_supercluster_phi=x;} 
  void set_dB(float x){m_dB=x;} 
  void set_neutralHadronIso(float x){m_neutralHadronIso=x;} 
  void set_chargedHadronIso(float x){m_chargedHadronIso=x;} 
  void set_photonIso(float x){m_photonIso=x;}
  void set_trackIso(float x){m_trackIso=x;} 
  void set_puChargedHadronIso(float x){m_puChargedHadronIso=x;}
  void set_gsfTrack_trackerExpectedHitsInner_numberOfLostHits(int x){m_gsfTrack_trackerExpectedHitsInner_numberOfLostHits=x;}
  void set_gsfTrack_px(float x){m_gsfTrack_px=x;}
  void set_gsfTrack_py(float x){m_gsfTrack_py=x;}
  void set_gsfTrack_pz(float x){m_gsfTrack_pz=x;}
  void set_gsfTrack_vx(float x){m_gsfTrack_vx=x;}
  void set_gsfTrack_vy(float x){m_gsfTrack_vy=x;}
  void set_gsfTrack_vz(float x){m_gsfTrack_vz=x;}
  void set_passconversionveto(bool x){m_passconversionveto=x;}
  void set_dEtaIn(float x){m_dEtaIn=x;}
  void set_dPhiIn(float x){m_dPhiIn=x;} 
  void set_sigmaIEtaIEta(float x){m_sigmaIEtaIEta=x;}  // this is the 'full5x5sigma ieta ieta', (not the gsfelecton->sigmaIetaIeta)
  void set_HoverE(float x){m_HoverE=x;}
  void set_fbrem(float x){m_fbrem=x;}
  void set_EoverPIn(float x){m_EoverPIn=x;}
  void set_EcalEnergy(float x){m_EcalEnergy=x;}
  void set_mvaTrigV0(float x){m_mvaTrigV0=x;}
  void set_mvaNonTrigV0(float x){m_mvaNonTrigV0=x;}
  void set_AEff(float x){m_AEff=x;}

  float gsfTrack_dxy_vertex(const float point_x, const float point_y) const{ 
    return ( - (m_gsfTrack_vx-point_x) * m_gsfTrack_py + (m_gsfTrack_vy-point_y) * m_gsfTrack_px ) / sqrt(m_gsfTrack_px*m_gsfTrack_px+m_gsfTrack_py*m_gsfTrack_py);  
  };
  float gsfTrack_dz_vertex(const float point_x, const float point_y, const float point_z) const{ 
    return (m_gsfTrack_vz-point_z) - ((m_gsfTrack_vx-point_x)*m_gsfTrack_px+(m_gsfTrack_vy-point_y)*m_gsfTrack_py)/(m_gsfTrack_px*m_gsfTrack_px+m_gsfTrack_py*m_gsfTrack_py) * m_gsfTrack_pz; 
  }
  float relIso() const{
    return ( m_chargedHadronIso +  m_neutralHadronIso + m_photonIso  ) / pt();
  }
  float relIsodb() const{
    return ( m_chargedHadronIso + std::max( 0.0, m_neutralHadronIso + m_photonIso - 0.5*m_puChargedHadronIso ) ) / pt();
  }
  float relIsorho(const double rho) const{
    return ( m_chargedHadronIso + std::max( 0.0, m_neutralHadronIso + m_photonIso - rho*m_AEff ) ) / pt();
  }

  operator FlavorParticle() const{
    FlavorParticle fp;
    fp.set_charge(this->charge());
    fp.set_pt(this->pt());
    fp.set_eta(this->eta());
    fp.set_phi(this->phi());
    fp.set_energy(this->energy());
    fp.set_pdgId(-13*this->charge());
    return fp;
  }

 private:
  float m_vertex_x; 
  float m_vertex_y; 
  float m_vertex_z; 
  float m_supercluster_eta; 
  float m_supercluster_phi; 
  float m_dB; 
  float m_neutralHadronIso; 
  float m_chargedHadronIso; 
  float m_photonIso;
  float m_trackIso; 
  float m_puChargedHadronIso;
  int m_gsfTrack_trackerExpectedHitsInner_numberOfLostHits;
  float m_gsfTrack_px;
  float m_gsfTrack_py;
  float m_gsfTrack_pz;
  float m_gsfTrack_vx;
  float m_gsfTrack_vy;
  float m_gsfTrack_vz;
  bool m_passconversionveto;
  float m_dEtaIn;
  float m_dPhiIn; 
  float m_sigmaIEtaIEta; 
  float m_HoverE;
  float m_fbrem;
  float m_EoverPIn;
  float m_EcalEnergy;
  float m_mvaTrigV0;
  float m_mvaNonTrigV0;
  float m_AEff;

};

#endif
